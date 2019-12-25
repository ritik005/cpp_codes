#include<bits/stdc++.h>
using namespace std;
int fact1(int n)
{
    const unsigned int m = 1000000007; 
    unsigned long long  fac=1;
    for (int i = 1; i <=n ; i++)
    {
        fac=(fac*i)%m;
    }
    return fac;
}


int main(){
    int N, M,a;
    cin >> N >> M;
    a=fact1(M);
    cout<<a;
    return 0;
}