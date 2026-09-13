# Grading Students

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

HackerLand University has the following grading policy:

* Every student receives a $grade$ in the inclusive range from $0$ to $100$.
* Any $grade$ less than $40$ is a failing grade. 

Sam is a professor at the university and likes to round each student's $grade$ according to these rules:

* If the difference between the $grade$ and the next multiple of $5$ is less than $3$, round $grade$ up to the next multiple of $5$.
* If the value of $grade$ is less than $38$, no rounding occurs as the result will still be a failing grade.

**Examples**

- $grade = 84$ round to $85$ (85 - 84 is less than 3)  
- $grade = 29$ do not round (result is less than 38)  
- $grade = 57$ do not round (60 - 57 is 3 or higher)   

Given the initial value of $grade$ for each of Sam's $n$ students, write code to automate the rounding process.   

**Function Description**  

Complete the function $gradingStudents$ with the following parameter(s):  

- $int\ grades[n]$: the grades before rounding  

**Returns**

- $int[n]$: the grades after rounding

**Input Format**

The first line contains a single integer, $n$, the number of students. 		
Each line $i$ of the $n$ subsequent lines contains a single integer, $grades[i]$.

**Constraints**

* $ 1 \le n \le 60 $
* $ 0 \le grades[i] \le 100 $

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-13T06:01:42.198Z  

```cpp
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

vector<int> gradingStudents(vector<int> grades) {
    for(int i=0;i<grades.size();i++){
        if(grades[i]>=38){
            int d=5*((grades[i]/5)+1);
            if(d-grades[i]<3){
                grades[i]=d;
            }
        }
    }
    return grades;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string grades_count_temp;
    getline(cin, grades_count_temp);

    int grades_count = stoi(ltrim(rtrim(grades_count_temp)));

    vector<int> grades(grades_count);

    for (int i = 0; i < grades_count; i++) {
        string grades_item_temp;
        getline(cin, grades_item_temp);

        int grades_item = stoi(ltrim(rtrim(grades_item_temp)));

        grades[i] = grades_item;
    }

    vector<int> result = gradingStudents(grades);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

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

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/grading/problem)