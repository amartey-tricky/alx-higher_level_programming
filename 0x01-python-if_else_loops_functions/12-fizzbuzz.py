#!/usr/bin/python3
def fizzbuzz():
    for number in range(1, 101):
        if number % 3 == 0 and number % 5 == 0:
            word = "FizzBuzz"
        elif number % 3 == 0:
            word = "Fizz"
        elif number % 5 == 0:
            word = "Buzz"
        else:
            word = str(number)
        print("{:s}".format(word), end=" ")
