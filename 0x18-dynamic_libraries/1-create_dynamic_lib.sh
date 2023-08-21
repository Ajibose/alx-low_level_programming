#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o 1-create_dynamic_lib.sh *.o
