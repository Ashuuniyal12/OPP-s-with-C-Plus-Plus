#include<iostream>

using namespace std;

int main()
{

	int a ;
	cout << "Enter a number of which you want to calcualte factoiral ";
	cin >> a ;
	int fact =1;
	while(a)
	{
		fact *=a;
		a--;
	}
	cout << "Factoiral of number is " << fact <<endl;

return 0;
}
