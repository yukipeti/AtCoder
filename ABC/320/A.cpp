#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int ans_a = 1;
    int ans_b = 1;

    for(int i = 0; i < b; i++){
        ans_a = ans_a * a;
    }
    for(int i = 0; i < a; i++){
        ans_b = ans_b * b;
    }
    cout << ans_a + ans_b << endl;

    return 0;
}
