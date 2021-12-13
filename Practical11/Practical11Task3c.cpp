#include<iostream>
using namespace std;

class A{
public:
	int k;
	void display()
	{cout << "Inside class A "<< endl;
	cout << "Value of k is "<< k << endl;}
};
class B{
public:
	int k;
	void display()
	{cout << "Inside class A "<< endl;
	cout << "Value of k is "<< k << endl;}};
	
class C: public A,public B{};

int main()
{
C obj;
	// (obj .k =10;)-> this will show error as the compiler dont know about which k variable to access 
	//obj.display(); to solve the error we need to use SRO to specify which class we want to use.
	obj .A::k =10;
	obj.B::display();
};
