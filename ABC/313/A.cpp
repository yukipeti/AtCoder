#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,m = 0;
    cin >> N;
    vector<int> P(100);

    for(int i = 0;i < N;i++){
        cin >> P[i];
    }

    for(int i = 1;i < N;i++){
        m = max(m,P[i]);
    }

    cout << max(0,(m - P[0]) + 1) << endl;
    return 0;
}