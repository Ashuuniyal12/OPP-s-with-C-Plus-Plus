#include<iostream>
using namespace std;

class Mammals{
public:
	void displayMammals(){cout<<"I am a Mammal"<<endl;}
};

class Marine{
public:
	void displayMarine(){cout<<"I am a Marine"<<endl;}
};

class BlueWhale : public Mammals, public Marine{
public:
	void displayBoth(){cout<<"I am a Both"<<endl;}
};

int main()
{
	Mammals A;
	Marine B;
	BlueWhale C;
	A.displayMammals();
	B.displayMarine();
	C.displayBoth();
	C.displayMammals();
	C.displayMarine();
return 0;
}
