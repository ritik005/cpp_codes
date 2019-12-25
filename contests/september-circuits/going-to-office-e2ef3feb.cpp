// // A program to demonstrate the use of stringstream 
// #include <iostream> 
// #include <sstream> 
// using namespace std; 

// int main() 
// { 
// 	string s = "12345"; 

// 	// object from the class stringstream 
// 	stringstream geek(s); 

// 	// The object has the value 12345 and stream 
// 	// it to the integer x 
// 	int x = 0; 
// 	geek >> x; 

// 	// Now the variable x holds the value 12345 
// 	cout << "Value of x : " << x; 

// 	return 0; 
// }



 #include <iostream> 
 #include <sstream> 
 using namespace std; 

 int main()
 {
	 int n;
	 cin >> n;
	 string s[n],arr[n];
	 cin >> s[0];
	 arr[0]=s[0];
	 cout << "NO" << endl;
	 for(int i=1;i<n;i++)
	 {
		 cin >> s[i];
		 arr[i]=s[i];
		 int c=0;
		 for(int j=0;j<i;j++)
		 {
			 if(arr[j]==s[i])
			 {
				 cout << "YES" << endl;
				 break;
			 }
			 else
			 {
				 c++;
			 }
		 }
		 if(c==i)
		 {
			 cout << "NO" << endl;
		 }
	 }
	 return 0;
 }