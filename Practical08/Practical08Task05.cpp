#include<iostream>

using namespace std;

int fact (int n)
{
	if (n==1 || n==0) return 1;
	
	return n*fact(n-1);
	
}

int main()
{

	int a ;
	cout << "Enter a number of which you want to calcualte factoiral ";
	cin >> a ;
	cout << "Factoiral of number is " << fact(a) <<endl;

return 0;
}
