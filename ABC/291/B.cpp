#include <bits/stdc++.h>
using namespace std;
//終わってないっす
int main()
{
    int a,b,c,d;
    double n;
    vector<int> scores;

    cin >> a;

    for(int i=0;i<5*a;i++)
    {
       cin >> scores[i];
    }
    for(int i=0;i<a;i++)
    {
        scores.pop_back();
        scores.erase(scores.begin());
    }
    for(int i=0;i<a;i++)
    {
        d=scores[i];
    }
    c=scores.size();
    n=d/3*a;

    cout << n << endl;

    return 0;
}