#!/bin/bash
gcc -Wall -Wextra -Werror -pendantic *.c -c -fPIC
gcc *.o -shared -o libname.so
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
