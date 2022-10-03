#!/usr/bin/python3
import random 
number = random.randint(-10000, 10000)

if number < 0:
    num = number * -1
    num = number % 10
    num = number * -1
else:
    num = number % 10
    print("last digit of {}".format(number), end=' ')
    if num > 5:
        print("is {} and is greater than 5".format(num))
    elif num == 0:
        print("is {} and is 0".format(num))
   elif num < 6 and num != 0:
       print("is {} and is less than 6 and not 0".format(num))
