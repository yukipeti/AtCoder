#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,k;
    long int count = 0;
    cin >> n >> k;
    vector<int> h(n);

    if(n < k){
        cout << 0 << endl;
        exit(0);
    }

    for(int i = 0;i < n;i++){
        cin >> h.at(i);
    }
    sort(h.begin(),h.end());
    h.erase(h.end() - k,h.end());

    for(int i = 0;i < h.size();i++){
        while(h.at(i) != 0){
            h.at(i) = h.at(i) - 1;
            count++;
        }
    }

    cout << count << endl;

    return 0;
}