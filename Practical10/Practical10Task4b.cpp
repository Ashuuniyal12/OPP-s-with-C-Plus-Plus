#include<iostream>
#include<string>
using namespace std;

class B{
public:
	int x;
};
	
class A{
public:
	string s ;
		 string operator + (B b)
		 {
		 	  return  (s + to_string(b.x));
		 }
};

int main()
{
	A a ,c;
	a.s = "Ashu";
	B b ;
	b.x =151;
	
	
		cout << "String is "<< a+b << endl;  	// a+b can be also called as :   a.operator + (b)   OR    a operator + (b). 
	return 0;
}
