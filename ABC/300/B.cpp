#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,a,b;

    cin >> a >> b;

    vector<vector<string>> A(a,vector<string>(b));
    vector<vector<string>> B(a,vector<string>(b));

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cin >>A.at(i).at(j);
            for(k=0;k<a;k++)
            {
                for(l=0;l<b;l++)
                {
                    cin >> B.at(k).at(l);
                }
            }
        }
    }

    return 0;
}