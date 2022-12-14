#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC 1-main.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
