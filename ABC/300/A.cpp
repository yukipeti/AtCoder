#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f;

    cin >> a >> b >> c;

    d=b+c;

    for(int i=0;i<a;i++)
    {
        cin >> e;
        if(e==d)
        {
            f=i;
        }
    }

    cout << f+1 <<endl;

    return 0;
}
