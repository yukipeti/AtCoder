#include <bits/stdc++.h>
using namespace std;
//japanese kokowozashi nakaba
int main(){
    string s;
    int count = 0;
    cin >> s;

    for(int i = 0; i < s.size() / 2; i++){
        if(s[i] == s[s.sise()-1-i]){
            count++;
        }
    }
    if(count == 0){
        cout << 1 << endl;
    }
    else{
        cout << count * 2 + 1;
    }

    return 0;
}
