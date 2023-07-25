#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int j;
    string a;
    cin >> a;    
    int k=a.length();
    int i = atoi(a.c_str()); 
    vector<int> Answer;
    
    for(j=0;i>0;j++)
    {
        if(i%2==0) Answer.push_back(1);
        else if(i%2==1) Answer.push_back(0);
        i=i/10;
    }
    for(j=k;j>0;j--) cout << Answer[j-1];

    return 0;
}