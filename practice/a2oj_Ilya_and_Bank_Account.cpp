#include <bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    string s,x,y,z,a;
    getline(cin, s);
    int l=s.length();
    y=s;
    z=s;
    if(y[0]!='-')
    {
        cout << s;
    }
    else
    {
        x=y.erase(l-2,1);
        a=z.erase(l-1,1);
        int n,m,b;
        n=stoi(x);
        m=stoi(a);
        b=max(n,m);
        cout << b;
    } 
    
    return 0;
}