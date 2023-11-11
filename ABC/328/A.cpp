#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x;
    int ans = 0;
    cin >> n >> x;
    vector<int> s(n);


    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for(int i = 0; i < n; i++){
        if (s[i] <= x) {
            ans = ans + s[i];
        }
    }
    cout << ans << endl;

    return 0;
}