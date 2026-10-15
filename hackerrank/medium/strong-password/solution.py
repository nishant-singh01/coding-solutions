#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'minimumNumber' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. STRING password
#

def minimumNumber(n, password):
    count = 0

    if not any(c.isdigit() for c in password):
        count += 1

    if not any(c.islower() for c in password):
        count += 1

    if not any(c.isupper() for c in password):
        count += 1

    if not any(c in "!@#$%^&*()-+" for c in password):
        count += 1

    return max(count, 6 - n)

    # Return the minimum number of characters to make the password strong

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    password = input()

    answer = minimumNumber(n, password)

    fptr.write(str(answer) + '\n')

    fptr.close()
