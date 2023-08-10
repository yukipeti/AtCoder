#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,n,a = 0,x;
    cin >> h >> n;

    for (int i = 0; i < n;i++){
        cin >> x;
        a = a + x;
    }
    if(a >= h){
        cout << "Yes" << endl;
    }
    else if(a < h){
        cout << "No" << endl;
    }

    return 0;
}