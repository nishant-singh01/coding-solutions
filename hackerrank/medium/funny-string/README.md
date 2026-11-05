# Funny String

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

In this challenge, you will determine whether a string is *funny* or not.  To determine whether a string is funny, create a copy of the string in reverse e.g. $abc \rightarrow cba$.  Iterating through each string, compare the absolute difference in the [ascii](https://en.wikipedia.org/wiki/ASCII) values of the characters at positions 0 and 1, 1 and 2 and so on to the end.  If the list of absolute differences is the same for both strings, they are funny.

Determine whether a give string is funny.  If it is, return `Funny`, otherwise return `Not Funny`.

**Example**  
$s = \texttt{'lmnop'}$  

The ordinal values of the charcters are $[108, 109, 110, 111, 112]$.  $s_{reverse} = \texttt{'ponml'}$ and the ordinals are $[112, 111, 110, 109, 108]$.  The absolute differences of the adjacent elements for both strings are $[1, 1, 1, 1]$, so the answer is `Funny`.

**Function Description**

Complete the *funnyString* function in the editor below.   

funnyString has the following parameter(s):  

- *string s:* a string to test  

**Returns**  

- *string:* either `Funny` or `Not Funny`

**Input Format**

The first line contains an integer $q$, the number of queries. 	
The next $q$ lines each contain a string, $s$.   

**Constraints**

- $1 \leq q \leq 10$  	
- $2 \leq \text{length of }s  \leq 10000$	

**Output Format**

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-05T05:58:18.560Z  

```py
#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'funnyString' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def funnyString(s):
    for i in range(1, len(s)):
        forward=abs(ord(s[i])-ord(s[i-1]))

        reverse=abs(ord(s[-i])-ord(s[-i-1]))

        if forward != reverse:
            return "Not Funny"

    return "Funny"


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    for q_itr in range(q):
        s = input()

        result = funnyString(s)

        fptr.write(result + '\n')

    fptr.close()

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/funny-string/problem)