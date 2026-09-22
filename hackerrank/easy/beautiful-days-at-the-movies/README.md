# Angry Professor

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Lily likes to play games with integers.  She has created a new game where she determines the difference between a number and its reverse.  For instance, given the number $12$, its reverse is $21$.  Their difference is $9$.  The number $120$ reversed is $21$, and their difference is $99$.

She decides to apply her game to decision making.  She will look at a numbered range of days and will only go to a movie on a *beautiful day*.

Given a range of numbered days, $[i \ldots j]$ and a number $k$, determine the number of days in the range that are *beautiful*.  Beautiful numbers are defined as numbers where $|i \text{-} reverse(i)|$ is evenly divisible by $k$.  If a day's value is a beautiful number, it is a beautiful day.  Return the number of beautiful days in the range.

**Function Description**  

Complete the *beautifulDays* function in the editor below.   

beautifulDays has the following parameter(s):  

- *int i:* the starting day number  
- *int j:* the ending day number  
- *int k:* the divisor  

**Returns**  

- *int:* the number of beautiful days in the range  

**Input Format**

A single line of three space-separated integers describing the respective values of $i$, $j$, and $k$.

**Constraints**

- $1 \le i \le j \le 2 \times 10^6$
- $1 \le k \le 2 \times 10^9$

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T06:17:03.734Z  

```cpp
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'angryProfessor' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY a
 */

string angryProfessor(int k, vector<int> a) {
    int count=0;
    for(int i=0;i<a.size();i++){
        if(a[i]<=0){
            count++;
        }
    }
    if(count>=k){
        return "NO";
    }
    else{
        return "YES";
    }

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

        int n = stoi(first_multiple_input[0]);

        int k = stoi(first_multiple_input[1]);

        string a_temp_temp;
        getline(cin, a_temp_temp);

        vector<string> a_temp = split(rtrim(a_temp_temp));

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            int a_item = stoi(a_temp[i]);

            a[i] = a_item;
        }

        string result = angryProfessor(k, a);

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

[View on HackerRank](https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem)