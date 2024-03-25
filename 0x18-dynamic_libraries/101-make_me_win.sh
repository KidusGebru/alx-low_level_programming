#!/bin/bash
wget -P /tmp https://github.com/KidusGebru/alx-low_level_programming/raw/master/0x18-dynamic_libraries/gigmil.so
export LD_PRELOAD=/tmp/gigmil.so
