#!/usr/bin/python3
for alphabet in range(122, 96, -1):
    if alphabet % 2 == 0:
        print("{:s}".format(chr(alphabet)), end="")
    else:
        print("{:s}".format(chr(alphabet-32)), end="")
