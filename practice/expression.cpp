#include <bits/stdc++.h>

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

{
    long long unsigned int n,k,x,y;
    cin >> n >> k;
    x=(n+1)/2;
    if(k<=x)
    {
        cout << ((2*k)-1);
    }
    else
    {
        cout << (2*(k-x));
    }
    return 0;
}
