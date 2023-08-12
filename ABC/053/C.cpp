#include <bits/stdc++.h>
using namespace std;
///ABC053 C 志半ば
int main() {
    int sai = 5;
    long long int x,count = 0;
    cin >> x;

    while(x > 0){
        if(sai == 5 ){
            x = x - 6;
            count++;
            sai = 6;
        }
        else if(sai == 6){
            x = x - 5;
            count++;
            sai = 5;
        }
    }

    cout << count << endl;

    return 0;
}