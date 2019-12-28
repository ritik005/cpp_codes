#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n,k,sum=0,count=0;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum>k)
        {
            break;
        }
        else
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
