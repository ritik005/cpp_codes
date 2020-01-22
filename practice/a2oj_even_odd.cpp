
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long unsigned int n,k,x,y;
    cin >> n >> k;
    x=(n+1)/2;
    if(k<=x)
    {
        cout << ((2*k)-1);
    }
    else
    {
        cout << (2*(k-x));
    }
    return 0;
}