#include<iostream>
using namespace std; 

class Students{
	string name;
	int age;
	int marks;
	
public:
	void getDetails()
	{
		cout << "Enter Name : ";
		cin >> name;
		cout <<"Enter age : ";
		cin  >>age;
		cout << "Enter Marks: ";
		cin >> marks; 
		cout << endl;
	}
	
	friend int sum(Students);
};

int sum (Students s)
{
	return s.marks;
}

int main()
{
	Students obj[3] ;
	for(int i=0 ;i< 3;i++)
	{
		cout << "Enter Details for "<<i+1<<" Student" <<endl;
		obj[i].getDetails();
	}
	int TotalMarks=0;
	for(int i=0 ;i< 3;i++)
	{
		TotalMarks+=sum(obj[i]);
	}
	cout << "Total Marks of Student are " << TotalMarks<<endl ;
}	
		
		
		
		
		
		

