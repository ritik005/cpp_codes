#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1;
    cin >> s;
    int l=s.length();
    int j=0;
    for(int i=0;i<l;i=i+2)
    {
        s1[j]=s[i];
        j++;
    }
    // for(int i=0;i<s1.length();i++)
    // {
    //     cout << s1[i];
    // }
    // return 0;
    int length=s1.length();
    stringstream geek(s1);
    int arr[length];
    geek >> arr[length];
    for(int i=0;i<length;i++)
    {
        cout << arr[i];
    }
    return 0;
}