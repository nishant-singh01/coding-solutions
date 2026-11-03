# Permuting Two Arrays

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

There are two $n$-element arrays of integers, $A$ and $B$. Permute them into some $A'$ and $B'$ such that the relation $A'[i] + B'[i] \ge k$ holds for all $i$ where $0 \le i \lt n$. 

There will be $q$ queries consisting of $A$, $B$, and $k$. For each query, return `YES` if some permutation $A'$, $B'$ satisfying the relation exists.  Otherwise, return `NO`. 

**Example**   
$A = [0, 1]$   
$B = [0, 2]$   
$k = 1$   

A valid $A', B'$ is $A' = [1, 0]$ and $B' = [0, 2]$: $1 + 0 \ge 1$ and $0 + 2 \ge 1$.  Return `YES`.

**Function Description**  

Complete the *twoArrays* function in the editor below.  It should return a string, either `YES` or `NO`.  

twoArrays has the following parameter(s):  

- *int k:* an integer  
- *int A[n]:* an array of integers  
- *int B[n]:* an array of integers   

**Returns**   
- *string:* either `YES` or `NO`  


**Input Format**

The first line contains an integer $q$, the number of queries. 

The next $q$ sets of $3$ lines are as follows:

- The first line contains two space-separated integers $n$ and $k$, the size of both arrays $A$ and $B$, and the relation variable.
- The second line contains $n$ space-separated integers $A[i]$.
- The third line contains $n$ space-separated integers $B[i]$.

**Constraints**

- $1 \le q \le 10$
- $1 \le n \le 1000$
- $1 \le k \le 10^9$
- $0 \le A[i], B[i] \le 10^9$

**Output Format**

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T04:15:28.969Z  

```py
#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'twoArrays' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. INTEGER k
#  2. INTEGER_ARRAY A
#  3. INTEGER_ARRAY B
#

def twoArrays(k, A, B):
    A.sort()
    B.sort(reverse=True)
    for i in range(len(A)):
        if A[i]+B[i]<k:
            return "NO"
    return "YES"    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    for q_itr in range(q):
        first_multiple_input = input().rstrip().split()

        n = int(first_multiple_input[0])

        k = int(first_multiple_input[1])

        A = list(map(int, input().rstrip().split()))

        B = list(map(int, input().rstrip().split()))

        result = twoArrays(k, A, B)

        fptr.write(result + '\n')

    fptr.close()

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/two-arrays/problem)