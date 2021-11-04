#include<iostream>
using namespace std ;
 
 class Reminder{
 public :
 		int a ;
 		int b;
 		Reminder(int a ,int b){
 			this->a =a ;
 			this->b = b;
 		}
 		
 		void rem ()
 		{
 		cout << "Reminder is " << a%b<< endl;
 		}
 };
 
 int main()
 {
 int a = 10;
 int b = 7;
 Reminder r(a,b);
 r.rem();
 return 0;
 }
