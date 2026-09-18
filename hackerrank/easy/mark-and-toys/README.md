# Mark and Toys

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Mark and Jane are very happy after having their first child. Their son loves toys, so Mark wants to buy some. There are a number of different toys lying in front of him, tagged with their prices.  Mark has only a certain amount to spend, and he wants to maximize the number of toys he buys with this money.  Given a list of toy prices and an amount to spend, determine the maximum number of gifts he can buy.

**Note** Each toy can be purchased only once.  

**Example**  
$prices = [1, 2, 3, 4]$   
$k=7$   

The budget is $7$ units of currency.  He can buy items that cost $[1, 2, 3]$ for $6$, or $[3, 4]$ for $7$ units.  The maximum is $3$ items.  

**Function Description**

Complete the function *maximumToys* in the editor below.  

maximumToys has the following parameter(s):  

-  *int prices[n]:*  the toy prices  
-  *int k:*  Mark's budget  

**Returns**  

- *int:* the maximum number of toys  

**Input Format**

The first line contains two integers, $n$ and $k$, the number of priced toys and the amount Mark has to spend.  
The next line contains $n$ space-separated integers $prices[i]$   


**Constraints**

$1 \le n \le 10^{5}$  
$1 \le k \le 10^{9}$  
$1 \le prices[i] \le 10^{9}$  
A toy can't be bought multiple times.


**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-18T04:26:48.746Z  

```cpp
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'maximumToys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY prices
 *  2. INTEGER k
 */

int maximumToys(vector<int> prices, int k) {
    sort(prices.begin(),prices.end());
    int count=0,sum=0;
    for(int price:prices){
        if(sum+price<=k){
            sum+=price;
            count++;
        }
        
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int k = stoi(first_multiple_input[1]);

    string prices_temp_temp;
    getline(cin, prices_temp_temp);

    vector<string> prices_temp = split(rtrim(prices_temp_temp));

    vector<int> prices(n);

    for (int i = 0; i < n; i++) {
        int prices_item = stoi(prices_temp[i]);

        prices[i] = prices_item;
    }

    int result = maximumToys(prices, k);

    fout << result << "\n";

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

[View on HackerRank](https://www.hackerrank.com/challenges/mark-and-toys/problem)