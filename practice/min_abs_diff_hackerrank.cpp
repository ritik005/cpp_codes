// To find minimum absolute difference in an array

#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int i=0,curr=0;
    long long unsigned int min=1000000000;
    while(i<n-1)
    {
        curr=abs(arr[i]-arr[i+1]);
        if(curr<min)
        {
            min = curr;
        }
        i++;
    }
    cout << min ;
    return 0;
}

