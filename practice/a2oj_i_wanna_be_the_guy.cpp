#include <bits/stdc++.h>
 
using namespace std;
 
int main()
 {
    int n,p,q,count=0;
    cin >> n;
    int hash[n+1]={0};
    cin >> p;
    int arr[p];
    for(int i=1;i<=p;i++)
    {
        cin >> arr[i];
        hash[arr[i]]++;
    }
    cin >> q;
    int brr[q];
    for(int i=1;i<=q;i++)
    {
        cin >> brr[i];
        hash[brr[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(hash[i]==0)
        {
            cout << "Oh, my keyboard!";
            break;
        }
        else
        {
            count++;
        }
    }
    if(count==n)
    {
        cout << "I become the guy.";
    }
    return 0;
 }