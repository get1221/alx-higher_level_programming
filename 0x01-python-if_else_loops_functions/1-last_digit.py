#!/usr/bin/python3
import random 
number = random.randint(-10000, 10000)

if number < 0:
    num = number * -1
    number = number % 10
    number = nummber * -1
else:
     number = number % 10
    print("last digit of {}".format(number), end=' ')
    if number > 5:
        print("is {} and is greater than 5".format(number))
    elif number == 0:
        print("is {} and is 0".format(number))
   elif number < 6 and num != 0:
       print("is {} and is less than 6 and not 0".format(number))
