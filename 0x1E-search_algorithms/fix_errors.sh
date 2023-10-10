#!/bin/bash
# It converts DOS line endings to Unix (LF)
dos2unix *.c
# Will remove trailing whitespaces
sed -i 's/[[:space:]]\+$//' *.c
