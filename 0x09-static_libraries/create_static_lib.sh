#!/bin/bash
gcc -c *.c
ar rcs liballa.a *.o
ranlib liballa.a
