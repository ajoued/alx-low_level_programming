#!/bin/bash
wget -P /tmp https://github.com/ajoued/alx-low_level_programming.git/0x18-dynamic_libraries/not_rand.so
export LD_PRELOAD=/tmp/not_rand.so