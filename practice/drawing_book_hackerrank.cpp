#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,p,c=0;
    cin >> n;
    cin >> p;
    if(n/2>=p)
    {
        if(p%2==0)
        {
            cout << p/2;
        }
        else
        {
            cout << (p-1)/2;
        }
    }
    else
    {
        p=n-p;
        if(p==0)
        {
            cout << "0";
        }
        else if(n%2==0 && p==1)
        {
            cout << "1";
        }
        else if(n%2!=0 && p==1)
        {
            cout << "0";
        }
        else if(p%2==0)
        {
            cout << p/2;
        }
        else
        {
            cout << (p-1)/2;
        }
    }
    return 0;
}

