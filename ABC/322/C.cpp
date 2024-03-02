#include <bits/stdc++.h>
using namespace std;
//kokoro zashi nakaba
int main() {
    int n,m,x = 0;
    cin >> n >> m;
    vector<int> a(m);
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[j] > i){
                x = a[j];
                break;
            }
        }
        cout << x - i -1 << endl;
    }
    return 0;
}

