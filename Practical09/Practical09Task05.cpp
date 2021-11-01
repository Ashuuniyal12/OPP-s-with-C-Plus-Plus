/*Class : 		  Provide Inheritance.					|	Structure: 	Do not Provide Inheritance.
			  Provide Encapsulation.				|			Do not Provide Encapsulation.
			  Members are initilize using constructor.		|			Members are automatically initized.
			  Variable can be initilize during decleration.		|			Variable can not be initilize during decleration.
			  Memory to Object is provided in heap                  |			Memory to variable is provided in Stack
*/
#include<iostream>
using namespace std; 

class College{			
	string name;	 					//private variable name
public: 	
	static int strength ; 													
	char sec;						//Class provides encaptulation because of access modifiers.
};

int College ::strength = 300;					// variable can be initialized during the declaration 

class College2 : public College{				// class can also be inherited.
public:
	College2() {cout << "Constructor called"<< endl;
	cout << "All properties are inherited because class support inheritance"<< endl;} 
								//to initialize the member of a class, the constructors and destructors are used 
};

struct student{
	int strenght =  300; 					// variables in the structure can not be initialized during the declaration 
	string name;
	char  sec;
};

int main()
{
	College c;
	struct student s;
	College2 d; 
	
	s.name = "Alex"; 
	c.name = "Manan"; 					//compiler error because name is private
	return 0;
}	
		
		
		
		
		
		

