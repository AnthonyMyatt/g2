#!/bin/sh

pushd ../g2core
make clean PLATFORM=DUE BOARD=gShield
make SETTINGS_FILE=settings_PrintNC.h PLATFORM=DUE BOARD=gShield
popd
pushd ./TinyG2-OSX-Programmer
./DueFromOSX.sh -f ../../g2core/bin/PrintNC-gShield/g2core.elf -p $1
