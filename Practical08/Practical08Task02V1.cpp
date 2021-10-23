#include<iostream>
using namespace std; 

int main ()
{
	int arr[] = {10,20,30};

	cout << *arr;

	cout << arr;

	arr++;  	
			//The reason is that if you increment your array index as shown, the starting position of the array 
			//will be lost as the index that pointed to it got incremented. This leads to memory leaks.
	cout << *arr;
return 0;
}
