#include <bits/stdc++.h>

using namespace std;

int main()
 {
     int n,m;
    cin >> n >> m;
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+m);
    int min=996,curr=0,j=0;
    for(int i=n-1;i<m;i++)
    {
        curr=arr[i]-arr[j];
        if(curr<min)
        {
            min=curr;
            j++;
        }
        else
        {
            j++;
        }
    }
    cout << min;
    return 0; 
    }