#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;

    for(int i=0;i<a.length();i++)
    {
        char c = a.at(i);
        if(c >= 'A' && c <= 'Z')
        {
            cout << i+1 << endl;
        }
    }
    return 0;
}