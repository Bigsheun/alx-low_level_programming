#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c
gcc -shared -Wl,-soname,liball.so -o libdynamic.so *.o
