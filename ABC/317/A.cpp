#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,h,x;
    cin >> n >> h >> x;
    vector<int> p(n);

    for(int i = 0;i < n;i++){
        cin >> p[i];
        if(p[i] >= x - h){
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}