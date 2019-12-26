#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,flag=0;
    cin >> n;
    int hashtable[101]={0};
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        hashtable[arr[i]]++;
    }
    for(int i=0;i<101;i++)
    {
        if(hashtable[i]!=0)
        {
            if(hashtable[i]%2==0)
            {
                flag=flag+(hashtable[i])/2;
            }
            else
            {
                flag=flag+(hashtable[i]-1)/2;
            }
        }
    }
    cout << flag;
    return 0;
}
