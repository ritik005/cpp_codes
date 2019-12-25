// General mathematics based problem
#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n,j=0;
    long long unsigned int sum=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort (arr,arr+n);
    for(int i=n-1;i>=0;i--)
    {
        sum = sum+(pow(2,i)*arr[j]);
        j++;
    }
    cout << sum;
    return 0;
}
