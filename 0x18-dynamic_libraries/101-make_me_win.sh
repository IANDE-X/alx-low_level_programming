#!/bin/bash
wget https://github.com/IANDE-X/alx-low_level_programming/tree/main/0x18-dynamic_libraries/inject.so -P ../
export LD_PRELOAD=/tmp/inject.so
