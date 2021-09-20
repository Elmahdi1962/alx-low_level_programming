#!/bin/bash
wget -q --output-document=$PWD/inject.so https://github.com/Elmahdi1962/alx-low_level_programming/raw/master/0x18-dynamic_libraries/lib_inject.so
export LD_PRELOAD=$PWD/lib_inject.so
