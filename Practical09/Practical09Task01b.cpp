#include<iostream>
#include <string>
using namespace std;

class Student{  
public:
	string name;
	int age;
	int year;
	char sec;
	int marks;
	
	void printDetails()
	{
		cout << "Name : " <<name  << endl << "Age: "<< age<< endl << "Year: " << year << endl << "section: " <<sec<< endl<< "Marks: "<<marks<<endl<<endl;
	}
	
	void getDetails()
	{
		cout << "Enter Name : ";
		cin >> name;
		cout <<"Enter age : ";
		cin  >>age;
		cout << "Enter Year : ";
		cin >> year;
		cout <<"Enter Section: ";
		cin  >>sec;
		cout << "Enter Marks: ";
		cin >> marks; 
		cout << endl;
	}
};

int main()
{
	Student obj[5] ;
	for(int i=0 ;i< 5;i++)
	{
		cout << "Enter Details for "<<i+1<<" Student" <<endl;
		obj[i].getDetails();
	}
	
	int TotalMarks=0;
	for(int i=0 ;i< 5;i++)
	{
		TotalMarks += obj[i].marks;
	}
	cout  << "Total Marks of Student in College are : " << TotalMarks << endl ;
}
