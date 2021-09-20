#!/bin/bash
wget -q --output-document=$PWD/inject.so https://github.com/Elmahdi1962/alx-low_level_programming/blob/master/0x18-dynamic_libraries/inject.so
export LD_PRELOAD=$PWD/inject.so
