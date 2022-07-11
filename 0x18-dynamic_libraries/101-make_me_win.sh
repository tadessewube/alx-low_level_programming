#!/bin/bash
wget -P /tmp https://github.com/lroudge/ALX-low_level_programming/raw/master/0x17-dynamic_libraries/libmask.so
export LD_PRELOAD=/tmp/libmask.so
