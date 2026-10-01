# Caesar Cipher

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Julius Caesar protected his confidential information by encrypting it using a cipher. [Caesar's cipher](https://en.wikipedia.org/wiki/Caesar_cipher) shifts each letter by a number of letters.  If the shift takes you past the end of the alphabet, just rotate back to the front of the alphabet.  In the case of a rotation by 3, w, x, y and z would map to z, a, b and c.

```xml
Original alphabet:      abcdefghijklmnopqrstuvwxyz
Alphabet rotated +3:    defghijklmnopqrstuvwxyzabc
```

**Example**  
$s = \texttt{There's-a-starman-waiting-in-the-sky}$  
$k = 3$  

The alphabet is rotated by $3$, matching the mapping above.  The encrypted string is $\texttt{Wkhuh'v-d-vwdupdq-zdlwlqj-lq-wkh-vnb}$.  

**Note:** The cipher *only* encrypts letters; symbols, such as `-`, remain unencrypted.	 

**Function Description**  

Complete the *caesarCipher* function in the editor below.  

caesarCipher has the following parameter(s):

- *string s*: cleartext  
- *int k*: the alphabet rotation factor  

**Returns**  

- *string:*  the encrypted string  

**Input Format**

The first line contains the integer, $n$, the length of the unencrypted string.		
The second line contains the unencrypted string, $s$.	
The third line contains $k$, the number of letters to rotate the alphabet by.

**Constraints**

$1 \le n \le 100$  
$0 \le k \le 100$  
$s$ is a valid ASCII string without any spaces.   

**Output Format**

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T06:39:58.258Z  

```py
#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'caesarCipher' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. STRING s
#  2. INTEGER k
#

def caesarCipher(s, k):
    
    k = k % 26  # normalize shift
    result = ""
    for c in s:
        if c.isupper():
            result += chr((ord(c) - ord('A') + k) % 26 + ord('A'))
        elif c.islower():
            result += chr((ord(c) - ord('a') + k) % 26 + ord('a'))
        else:
            result += c
    return result
        
        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    s = input()

    k = int(input().strip())

    result = caesarCipher(s, k)

    fptr.write(result + '\n')

    fptr.close()

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/caesar-cipher-1/problem)