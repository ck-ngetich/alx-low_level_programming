#!bin/bash
gcc -Wall -pedantic -Werror -c *.c
ar -rc linall.a *.o
ranlib liball.a
