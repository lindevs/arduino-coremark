# ArduinoCoreMark

**ArduinoCoreMark** is a CPU performance benchmark for Arduino platform based on EEMBC CoreMark. It measures
the performance of CPU by performing various tasks such as linked list processing, matrix manipulation,
state machines execution.

## Requirements

CoreMark requires about 2.5 KiB (2560 bytes) SRAM. So, boards such as Arduino UNO is not supported.

## Installation

**ArduinoCoreMark** is published on [PlatformIO Registry](https://registry.platformio.org/libraries/lindevs/arduino-coremark) 
and can be installed using the following command:

```shell
pio pkg install "lindevs/arduino-coremark"
```

## Code example

```c++
#include <Arduino.h>
#include <core_arduino.h>

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    startCoremark();
    delay(5000);
}
```

## Output example

```text
2K performance run parameters for coremark.
CoreMark Size    : 666
Total ticks      : 14658
Total time (secs): 14.66
Iterations/Sec   : 7.50
Iterations       : 110
Compiler version : GCC7.3.0
Compiler flags   : (flags unknown)
Memory location  : STACK
seedcrc          : 0xE9F5
[0]crclist       : 0xE714
[0]crcmatrix     : 0x1FD7
[0]crcstate      : 0x8E3A
[0]crcfinal      : 0x134
Correct operation validated. See README.md for run and reporting rules.
CoreMark 1.0 : 7.50 / GCC7.3.0 (flags unknown) / STACK
```
