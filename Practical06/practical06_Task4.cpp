#include<bits/stdc++.h>

using namespace std;

int main(){
	string str , str1;
	cout << "Enter first String " <<endl;
	getline(cin,str);
	cout << "Enter second String " <<endl;
	getline(cin,str1);
	
	if(str.size()!=str1.size())
	{
		cout<< "Strings are not equal"<<endl;
		return 0;
	}
	else
	{
		for(int i=0; i< str.size();i++)
		{

			if(str[i]!= str1[i]){
				cout<< "Strings are not equal"<<endl;
				return 0;
				}
		}
		cout << "String are Equal"<< endl;

	}

}
