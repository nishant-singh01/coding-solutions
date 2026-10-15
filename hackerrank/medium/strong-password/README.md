# Strong Password

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Louise joined a social networking site to stay in touch with her friends. The signup page required her to input a *name* and a *password*. However, the password must be *strong*. The website considers a password to be *strong* if it satisfies the following criteria:

- Its length is at least $6$.  
- It contains at least one digit.  
- It contains at least one lowercase English character. 
- It contains at least one uppercase English character. 
- It contains at least one special character. The special characters are: `!@#$%^&*()-+`  

She typed a random string of length $n$ in the password field but wasn't sure if it was strong. Given the string she typed, can you find the minimum number of characters she must add to make her password strong?

*Note*: Here's the set of types of characters in a form you can paste in your solution:

```cpp14
numbers = "0123456789"
lower_case = "abcdefghijklmnopqrstuvwxyz"
upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
special_characters = "!@#$%^&*()-+"
```

**Example**  

$\text{password } = \text{'2bbbb'}$  

This password is 5 characters long and is missing an uppercase and a special character.  The minimum number of characters to add is $2$.  

$\text{password } = \text{'2bb#A'}$  

This password is 5 characters long and has at least one of each character type.  The minimum number of characters to add is $1$.    

**Function Description**  

Complete the _minimumNumber_ function in the editor below.  

_minimumNumber_ has the following parameters:  

- *int n:*  the length of the password  
- *string password:* the password to test  

**Returns**  

- *int:*  the minimum number of characters to add  


**Input Format**

The first line contains an integer $n$, the length of the password.

The second line contains the password string. Each character is either a lowercase/uppercase English alphabet, a digit, or a special character.


**Constraints**

- $1 \le n \le 100$  
- All characters in $password$ are in [a-z], [A-Z], [0-9], or [!@#$%^&*()-+ ].


**Output Format**

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-15T06:21:01.021Z  

```py
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

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/strong-password/problem)