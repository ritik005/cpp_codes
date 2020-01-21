#include <bits/stdc++.h>
 
using namespace std;
 
int main()
 {
    string s;
    int count=0;
    getline(cin,s);
    int hash[26]={0};
    if(s.length()==2)
    {
        cout << 0;
    }
    else
    {
    for(int i=1;i<s.length();i=i+3)
    {
        hash[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(hash[i]!=0)
        {
            count++;
        }
    }
    cout << count;
    }
    return 0;
 }