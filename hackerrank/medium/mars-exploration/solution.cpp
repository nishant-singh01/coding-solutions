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
