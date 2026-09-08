# While Loop

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a number  **x**, print the numbers from x to 0 in decreasing order in a single line.

 **Examples:** 

```
Input: x = 3
Output: 3 2 1 0
Explanation: Numbers in decreasing order from 3 are 3 2 1 0.
```

```
Input: x = 5
Output: 5 4 3 2 1 0
Explanation: Numbers in decreasing order from 5 are 5 4 3 2 1 0.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-08T14:08:44.585Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    for(int i=x;i>=0;i--){
        cout<<i<<' ';
    }
    
    return 0;
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/while-loop/1)