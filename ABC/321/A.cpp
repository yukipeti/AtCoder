#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    int count = 0;
    cin >> n;
    for(int i = 0; i < n.size() ; i++){
        if(n[i] > n[i+1]) count++;
    }
    if(count == n.size()) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

