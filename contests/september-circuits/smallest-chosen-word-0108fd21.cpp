// // #include <bits/stdc++.h>

// // using namespace std;

// // int main ()
// // {
    
// //          int n,a,count=0,flag=0;
// //          cin >> n;
// //          a=n;
// //         while(a!=0)
// //         {
// //             a=a/10;
// //             count++;
// //         }
// //         a=n;
// //         int arr[count];
// //         for(int i=count-1;i>=0;i--)
// //         {
// //             arr[i]=(a%10);
// //             a = a /10;
// //         }
// //         for(int i=0;i<count;i++)
// //         {
// //             if(n%arr[i]==0)
// //             flag++;
// //         }
// //         cout << flag << endl;
// //     return 0;
// // }


//  #include <bits/stdc++.h>
//  using namespace std;

//  int main ()
//  {
//      vector <int> v;
//      vector <int> v1;
//      long long int n,p;
//      cin >> n >> p;
//      for(int i=2;i<=n;i++)
//      {
//          if(n%i==0)
//          v.push_back(i);
//      }
//     for(int i=0;i<v.size();i++)
//     {
//         int c=1;
//         for(int j=1;j<=n/2;j++)
//         {
//             if(v[i]%j==0)
//             {
//                 c++;
//             }
//         }
//         if(c==2)
//         {
//             v1.push_back(v[i]);
//         }
//     }
//     int result=v1.size();
//     if(result>=p)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }
//      return 0;
//  }


  #include <bits/stdc++.h>
  using namespace std;

  int isprime( int num)
  {
      int flag=0;
      for(int i=2;i<=num/2;i++)
      {
          if(num%i==0)
          {
          flag=1;
          break;
          }
      }
      if(flag==1)
      {
          return 0;
      }
      else
      {
          return 1;
      }
      
  }

  int main ()
  {
      vector <int> v;
      long long int n,p;
      int t=0;
      cin >> n >> p;
      for(int i=2;i<=n/2;i++)
      {
          if(n%i==0)
          {
              v.push_back(i);
          }

      }
      v.push_back(n);
      for(int i=0;i<v.size();i++)
      {
          int c=1;
          c=isprime(v[i]);
          if(c==1)
          {
              t++;
          }
      }
      if(t>=p)
      {
          cout<<"YES";
      }
      else
      {
          cout << "NO";
      }
      return 0;
  }