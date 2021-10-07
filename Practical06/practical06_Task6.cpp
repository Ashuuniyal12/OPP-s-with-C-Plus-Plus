#include<bits/stdc++.h>

using namespace std; 

int main()
{
	string s = "HEllo";
	
	cout << "Address Before Changing the  first character "<< &s <<endl;
	s[0] ='J';
	
	
	cout << s <<endl;
	cout <<"Address After Changing the  first character "<< &s <<endl;

}
