#include <bits/stdc++.h>
#include<string>

using namespace std;

int main()
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

// {
//     int n,m,a,b,x,y;
//     cin >> n >> m >> a >> b;
//     x=n/m;
//     y=n-(m*x);
//     if(b>=((2*a)+1))
//     {
//         cout << (n*a);
//     }
//     else
//     {
//         if(y==0)
//         {
//             cout << (b*x);
//         }
//         else
//         {
//             cout << ((a*y)+(b*x));
//         }
//     }
//     return 0;
{
    string s,x,y,z,a;
    getline(cin, s);
    int l=s.length();
    y=s;
    z=s;
    if(y[0]!='-')
    {
        cout << s;
    }
    else
    {
        x=y.erase(l-2,1);
        a=z.erase(l-1,1);
        int n,m,b;
        n=stoi(x);
        m=stoi(a);
        b=max(n,m);
        cout << b;
    } 
    
    return 0;
}
