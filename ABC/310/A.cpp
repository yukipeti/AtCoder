#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,P,Q;
    vector<int> D;
    int x,y;

    cin >> N >> P >> Q;

    for(int i = 0; i < N; i++){
        cin >> x;
        D.push_back(x);
    }

    y = D[0];
    for(int j = 0; j < N;j++){
        if(y > D[j]){
            y = D[j];
        }
    }

    if(P < Q + y) cout << P << endl;
    else  cout << Q + y << endl;

    return 0;
}