#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str , str1 ="";
	cout << "Enter a String " <<endl;
	getline(cin,str);
	
	string str2 = str;
	
	int size = str.size();
	reverse(str.begin(), str.end());
	cout << "String after calling reverse function is "<< str << endl;
	int j =0;

	for(int i = 0 ;i <size-1;i++)
	{
		str1.push_back(str[i]);
	}
	//[j]='\0';
	cout << "String after calling user defined function is "<< str1 << endl;
	
}
