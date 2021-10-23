#include<iostream>
using namespace std;

int main()
{

	int *p = {10,20,20};

	cout << *p;

	p++;

	cout << *p;

	return 0;
}

/* This program will though an initilization error because the varialbe p is 
   is a pointer type variable */
