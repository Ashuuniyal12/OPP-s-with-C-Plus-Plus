#include<iostream>
#include <string>
using namespace std;

class Student{
public:
	string name;
	int rollNo;
	unsigned long int phNo;
	string add ;
	
	void printDetails()
	{
		cout << "Name : " <<name  << endl << "Roll No: "<< rollNo<< endl << "Phone No: " << phNo << endl << "Address:" <<add<< endl<< endl;
	}
	
	void getDetails()
	{
		cout << "Enter Name : ";
		cin >> name;
		cout <<"Enter RollNo: ";
		cin  >>rollNo;
		cout << "Enter Phone Number: ";
		cin >> phNo;
		cout <<"Enter Address: ";
		cin  >>add;
		cout << endl;
	}
};

int main()
{
	Student obj1, obj2;
	cout << "Enter Details for First Student " <<endl;
	obj1.getDetails();
	cout << "Enter Details for Second Student " <<endl;
	obj2.getDetails();
	cout << "Details Entered are : " <<endl;
	obj1.printDetails();
	obj2.printDetails();
}
