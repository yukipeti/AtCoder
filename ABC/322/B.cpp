#include <bits/stdc++.h>
using namespace std;
//kokorozashinakaba
int main() {
    int n,m,count = 0;
    cin >> n >> m;
    string s,t;
    cin >> s >> t;

    for(int i = 0; i < n; i++){
        if(s[i] == t[i]) count++;
    }
    if(s == t) cout << 0 << endl;
    else if(count == n) cout << 1 << endl;
    else if(count != n && s == t.erase(0,t.size() - s.size())) cout << 2 << endl;
    else cout << 3 << endl;

    return 0;
}

