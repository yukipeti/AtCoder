#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b=0,c=0,d=1,e=0,f=0;
    cin >> a;

    f=a;
    while(b==0)
    {   
        a=a/10;
        c++;
        if(a==0) b++;
    }

    if(c>3||c%10!=0)
    {
        for(int i=0;i<c-3;i++)
        {
            d=d*10;
        }
    }
    if(c<3) cout << f << endl;
    else 
    {
        e=f-(f%d);
        cout << e << endl;
    }
    return 0;
}
