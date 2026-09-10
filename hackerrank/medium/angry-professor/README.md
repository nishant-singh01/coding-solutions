# Angry Professor

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

A Discrete Mathematics professor has a class of students. Frustrated with their lack of discipline, the professor decides to cancel class if fewer than some number of students are present when class starts.  Arrival times go from on time ($arrivalTime \le 0$) to arrived late ($arrivalTime \gt 0$).

Given the arrival time of each student and a threshhold number of attendees, determine if the class is cancelled.  

**Example**  

$n = 5$  
$k = 3$  
$a = [-2, -1, 0, 1, 2]$  

The first $3$ students arrived on.  The last $2$ were late.  The threshold is $3$ students, so class will go on.  Return `YES`.   

**Note:** Non-positive arrival times ($a[i] \le 0$) indicate the student arrived early or on time; positive arrival times ($a[i] \gt 0$) indicate the student arrived $a[i]$ minutes late.  

**Function Description**

Complete the *angryProfessor* function in the editor below.  It must return `YES` if class is cancelled, or `NO` otherwise.  

angryProfessor has the following parameter(s):  

-  *int k*: the threshold number of students  
-  *int a[n]*: the arrival times of the $n$ students

**Returns**  

- *string:*  either `YES` or `NO`

**Input Format**

The first line of input contains $t$, the number of test cases. 

Each test case consists of two lines.  

The first line has two space-separated integers, $n$ and $k$, the number of students (size of $a$) and the cancellation threshold.  
The second line contains $n$ space-separated integers ($a[1], a[2], \ldots, a[n]$) that describe the arrival times for each student.


**Constraints**

- $1 \le t \le 10$  
- $1 \le n \le 1000$  
- $1 \le k \le n$  
- $-100 \le a[i] \le 100, where\ i \in [1,\ldots n]$

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-10T07:10:47.265Z  

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
    int n=a.size();
    int count=0;
    
    for(int i=0;i<n;i++){
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

[View on HackerRank](https://www.hackerrank.com/challenges/angry-professor/problem)