# Pangrams

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

A *pangram* is a string that contains every letter of the alphabet.  Given a sentence determine whether it is a pangram in the English alphabet.  Ignore case.  Return either `pangram` or `not pangram` as appropriate.

**Example**  
$s = \text{'The quick brown fox jumps over the lazy dog'}$  

The string contains all letters in the English alphabet, so return `pangram`.

**Function Description**

Complete the function *pangrams* in the editor below.  It should return the string `pangram` if the input string is a pangram.  Otherwise, it should return `not pangram`.  

pangrams has the following parameter(s):

- *string s:* a string to test  

**Returns**  

- *string:* either `pangram` or `not pangram`  

**Input Format**

 A single line with string $s$. 



**Constraints**

$0 \lt \text{ length of } s  \le 10^3$  
Each character of $s$, $s[i] \in \{a-z, A-Z, \textit{space}\}$
 

**Output Format**

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T06:20:55.389Z  

```py
#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'pangrams' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def pangrams(s):
    # Write your code here
    st=set('abcdefghijklmnopqrstuvwxyz')
    
    s=s.lower()
    
    if st.issubset(s):
        return "pangram"
    else:
        return "not pangram"
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = pangrams(s)

    fptr.write(result + '\n')

    fptr.close()

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/pangrams/problem)