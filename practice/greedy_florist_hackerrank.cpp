#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,k,sum=0,j=0;
    cin >> n >> k;
    int arr[n],brr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--)
    {
        brr[j]=arr[i];
        j++;
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+((i/k)+1)*brr[i];
    }
    cout << sum;
    return 0;
}