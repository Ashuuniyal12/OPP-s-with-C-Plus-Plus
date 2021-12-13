#include<iostream>
using namespace std;

class A{
public:
	int k;
	void display()
	{cout << "Inside class A "<< endl;
	cout << "Value of k is "<< k << endl;}
};
class B: public virtual A{};
class C: virtual public A{};
class D: public B, public C{};

int main()
{
D obj;
	obj .k =10;
	obj.display();
};
