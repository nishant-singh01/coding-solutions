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
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-11T04:30:13.007Z  

```cpp
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'closestNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER a
 *  2. INTEGER b
 *  3. INTEGER x
 */

int closestNumber(int a, int b, int x) {
    
    return round(double (pow(a,b))/x)*x;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        int a = stoi(first_multiple_input[0]);

        int b = stoi(first_multiple_input[1]);

        int x = stoi(first_multiple_input[2]);

        int result = closestNumber(a, b, x);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/closest-number/problem)