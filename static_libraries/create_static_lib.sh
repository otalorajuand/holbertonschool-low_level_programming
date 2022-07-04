#!/usr/bin/env bash

gcc -Wall -Werror -Wextra -pedantic -c *.c
ar -rc liball.a *.o
