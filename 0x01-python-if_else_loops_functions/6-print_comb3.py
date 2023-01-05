#!/usr/bin/python3
for first_number in range(0, 10):
    for second_number in range(0, 10):
        if first_number < second_number:
            print("{:d}{:d},".format(first_number, second_number), end=" ")
