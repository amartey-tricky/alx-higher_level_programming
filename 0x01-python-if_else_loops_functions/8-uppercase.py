#!/usr/bin/python3
def to_upper(chr):
    if ord(chr) >= 97 and ord(chr) <= 122:
        return (ord(chr) - 32)


def uppercase(str):
    new_string = ""
    for chr in str:
        new_string += "%c" % to_upper(chr)

    print("{:s}" .format(new_string))
