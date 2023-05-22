#!/bin/bash
wget -qP /tmp/ https://github.com/shield02/alx-low_level_programming/raw/master/0x18-dynamic_libraries/mmwin.so
export LD_PRELOAD="/tmp/mmwin.so"
