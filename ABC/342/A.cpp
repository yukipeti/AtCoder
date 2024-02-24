#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for(int i = 1; ;i++){
        if(s[i] != s[i-1] && s[i] == s[i+1]){
            cout << i  << endl;
            break;
        }
        else if(s[i] != s[i-1] && s[i] != s[i+1]){
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}

