#!/usr/bin/python3
import sys

if len(sys.argv) != 2:
    print("Usage: ./palindrome <digits>")
    sys.exit(1)

def check_palindrome(num):
    reverse_num = 0
    while num != 0:
        reverse_num = (reverse_num * 10) + (num % 10)

    if num == reverse_num:
        return 1
    return (-1)

digit = sys.argv[1]
upper_num = pow(10, int(digit)) - 1
base_num = 1 + int((upper_num / 10))
palin = 0

for i in range(base_num, upper_num + 1):
    for j in range(base_num, upper_num + 1):
        number = i * j
        i = check_palindrome(number)
        if i == 1:
            palin = number

print("{:d}".format(palin))
