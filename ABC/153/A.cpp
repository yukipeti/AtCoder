#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,a;

    cin >> h >> a;

    if(h % a != 0) cout << (h/a) + 1 << endl;
    else if(h % a == 0) cout << h/a << endl;

    return 0;
}