# Mars Exploration

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

A space explorer's ship crashed on Mars! They send a series of `SOS` messages to Earth for help. 

<img src="https://s3.amazonaws.com/hr-challenge-images/16032/1453204202-9e3fd295bb-NASA_Mars_Rover.jpg" title="NASA_Mars_Rover.jpg" />

Letters in some of the `SOS` messages are altered by cosmic radiation during transmission. Given the signal received by Earth as a string, $s$, determine how many letters of the `SOS` message have been changed by radiation.

**Example**  

$s = \text{'SOSTOT'}$  

The original message was `SOSSOS`.  Two of the message's characters were changed in transit.  

**Function Description**

Complete the *marsExploration* function in the editor below.  

marsExploration has the following parameter(s):

- *string s:* the string as received on Earth  

**Returns**  

- *int:* the number of letters changed during transmission  

**Input Format**

There is one line of input: a single string, $s$. 


**Constraints**

* $1 \le \text{ length of }s \le 99$
* $ \text{ length of }s \text{ modulo } \ 3=0$
* $s$ will contain only uppercase English letters, ascii[A-Z].

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-02T04:35:01.340Z  

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int marsExploration(string s) {
    int alteredcount=0;
    for(int i=0;i<s.size();i++){
        char expected;
        if(i%3==1){
            expected='O';
        }
        else{
            expected='S';
        }
        if (s[i]!=expected){
            alteredcount++;
        }
    }
    return alteredcount;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/mars-exploration/problem)