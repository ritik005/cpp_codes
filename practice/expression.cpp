#include <bits/stdc++.h>

using namespace std;

int main()
 {
    //  int a,b,c;
    //  cin >> a >> b >> c;
    //  if(a=b=c==1)
    //  {
    //      cout << a+b+c;
    //  }
    //  else
    //  {      
    //         if(a!=1 && b!=1 && c!=1)
    //         {
    //         cout << (a*b*c);
    //         }
    //  else if(a==1 && b!=1 && c!=1)
    //  {
    //      cout << (a+b)*c;
    //  }
    //  else if(a!=1 && b==1 && c!=1)
    //  {
    //      if(a>c)
    //      {
    //      cout << a*(b+c);
    //      }
    //      else
    //      {
    //          cout << (a+b)*c;
    //      }
    //  }
    //  else if(a!=1 && b!=1 && c==1)
    //  {
    //      cout << a*(b+c);
    //  }
    //  else if(a==1 && b==1 && c!=1)
    //  {
    //      cout << (a+b)*c;
    //  }
    //   else if(a!=1 && b==1 && c==1)
    //  {
    //      cout << a*(b+c);
    //  }
    //   else if(a==1 && b!=1 && c==1)
    //  {
    //      cout << (a+b+c);
    //  }
    //  }
    //  return 0;
    // string s;
    // int count=0;
    // getline(cin,s);
    // int hash[26]={0};
    // for(int i=1;i<s.length();i=i+3)
    // {
    //     hash[s[i]-'a']++;
    // }
    // for(int i=0;i<26;i++)
    // {
    //     if(hash[i]!=0)
    //     {
    //         count++;
    //     }
    // }
    // cout << count;
    // return 0;
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