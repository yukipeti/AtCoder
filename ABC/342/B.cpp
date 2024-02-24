#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q,a,b;
    cin >> n;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    vector<int> ans;
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> a >> b;
        for(int j = 0; j < n; j++){
            if(p[j] == a){
                ans.push_back(a);
                break;
            }
            else if(p[j] == b) {
                ans.push_back(b);
                break;
            }
        }
    }

    for(int i = 0; i < q; i++){
        cout << ans[i] << endl;
    }
    return 0;
}

