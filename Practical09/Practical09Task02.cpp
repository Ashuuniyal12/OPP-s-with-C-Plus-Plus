#include<iostream>
#include <string>
using namespace std;

class Area{
public:
	float area;
	
	Area(int len,int wid)
	{
		area = len*wid;
	}
	Area(int side)
	{
		area = side *side;
	}
	void display(){
	cout << "Area  is " << area<<" Square Uinit"<<  endl ;
	}
	
};
	
int main()
{
	Area r(15 ,7);
	r.display();
	
	Area s(6);
	s.display();
	
	return 0;
}
