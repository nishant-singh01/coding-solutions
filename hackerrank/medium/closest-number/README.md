# Closest Number

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given 3 numbers *a*, *b* and *x*. You need to output the multiple of *x* which is closest to *a<sup>b</sup>*. If more than one answer exists , display the smallest one. 



**Input Format**

The first line contains *T*, the number of testcases.  
*T* lines follow, each line contains 3 space separated integers (*a*, *b* and *x* respectively)

**Constraints**

1 &le; *T* &le; 10<sup>5</sup>  
1 &le; *x* &le; 10<sup>9</sup>  
0 &lt; *a<sup>b</sup>* &le; 10<sup>9</sup>    
1 &le; *a* &le; 10<sup>9</sup>    
-10<sup>9</sup> &le; *b* &le; 10<sup>9</sup> 

**Output Format**

For each test case , output the multiple of *x* which is closest to *a<sup>b</sup>*

## Solution

**Language:** C++  
**Runtime:** O(1)  
**Memory:** O(1)  
**Submitted:** 2026-09-11T04:30:13.007Z  

```cpp

int closestNumber(int a, int b, int x) {
    
    return round(double (pow(a,b))/x)*x;

}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/closest-number/problem)
