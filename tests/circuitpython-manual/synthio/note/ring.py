import sys

sys.path.insert(
    0, f"{__file__.rpartition('/')[0] or '.'}/../../../../frozen/Adafruit_CircuitPython_Wave"
)

import random
import audiocore
import synthio
from ulab import numpy as np
import adafruit_wave as wave

random.seed(9)
SAMPLE_SIZE = 1024
VOLUME = 32767
sine = np.array(
    np.sin(np.linspace(0, 2 * np.pi, SAMPLE_SIZE, endpoint=False)) * VOLUME,
    dtype=np.int16,
)

envelope = synthio.Envelope(
    attack_time=0.1, decay_time=0.05, release_time=0.2, attack_level=0.8, sustain_level=0.8
)

synth = synthio.Synthesizer(sample_rate=48000)


def synthesize(synth):
    n = synthio.Note(
        frequency=120,
        waveform=sine,
        ring_waveform=sine,
        ring_frequency=769,
        envelope=envelope,
        bend_mode=synthio.BendType.VIBRATO,
        bend_depth=50 / 1200,
        bend_rate=7,
    )

    print(synth, n)
    synth.press((n,))
    yield 720
    synth.release_all()
    yield 36


def chain(*args):
    for a in args:
        yield from a


# sox -r 48000 -e signed -b 16 -c 1 tune.raw tune.wav
with wave.open("ring.wav", "w") as f:
    f.setnchannels(1)
    f.setsampwidth(2)
    f.setframerate(48000)
    for n in chain(synthesize(synth)):
        for i in range(n):
            result, data = audiocore.get_buffer(synth)
            f.writeframes(data)
