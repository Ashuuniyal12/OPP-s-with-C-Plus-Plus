#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int *p=&a;
	int **q=&p;
	
	cout<<a<<" ";
	*p;
	cout<<*p<<" " ;
	**q=30;
	
	cout<<**q<<endl;
	
	return 0;
}
