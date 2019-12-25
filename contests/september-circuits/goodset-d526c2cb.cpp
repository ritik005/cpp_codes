 #include <iostream> 
 #include <sstream> 
 using namespace std; 
 
 int main()
 {
     long long int N;
     int p;
     cin >> N >> p;
     int c=0;
     if(N==1)
     {
         cout <<"NO" << endl;
     }
     else
     {
     for(int i=2;i<=N;i++)
        {
            if(N%i==0)
            {
                for(int j=2;j<=N/2;j++)
                {
                    if(i%j==0)
                    c++;
                 }
             }
        }
     if(c>=p)
     {
         cout << "YES" << endl;
     }
     else
     {
         cout << "NO" << endl;
     }
     }
     return 0;

 }