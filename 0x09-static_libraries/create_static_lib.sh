#!/bin/bash
gcc -Wall -pedantic -Werror -c *.c
ar -rc liball .a *.o
ranlin liball.a
