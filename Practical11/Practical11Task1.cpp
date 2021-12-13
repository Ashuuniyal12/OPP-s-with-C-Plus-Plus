#include<iostream>
 using namespace std; 
 
 class Parent {
 public:
 int x;
  void display(){
  x=100;
  cout <<x;}
  };
  
class Child: public Parent {
 public:
  void displayChild(){
  x = 5;
  cout << x<<endl;
  display();
  }
  };
  int main()
  {
  Child obj;
   obj.displayChild();
   return 0;
   }
