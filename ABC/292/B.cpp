#include <bits/stdc++.h>
using namespace std;
//志半ば
int main()
{
    int a,b,c,d,e;
    cin >> a >> b;
    vector<int> v(a,0);
    vector<string> v2;

    for(int i=0; i<b; i++)
    {
        cin >> c >> d;
        
        if(c==1)
        {
            v[d+1]++;
        }
        else if(c==2)
        {
            v[d+1]=v[d+1]+2;
        }
        else if(c==3)
        {
            e++;
            if(v[d+1]==0||v[d+1]==1)
            {
                v2.push_back("No");
            }
            else if(v[d+1]==2)
            {
                v2.push_back("Yes");
            }
        }
    }
    for(int i=0;i<e;i++)
    {
        cout << v2[i] << endl;
    }

    return 0;
}