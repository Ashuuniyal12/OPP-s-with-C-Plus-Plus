#include<iostream>
#include <iomanip>

 using namespace std;
  void charFun(){
  char a ='A';
  cout << "Char Output =" << a << endl;
  cout << "Char Output =" << int(a) << endl;
  }
  
   void boolFun(){
  bool a = 9 <5;
  cout << "Bool Output =" <<a << endl;
  }
   void shortFun(){
  short  a = 32767;
  cout << "Short Output =" <<a << endl;
  }
  void intFun(){
  int a = 2147483645;
  cout  <<"Int Output =" << a  << endl;
  }
    void longFun(){
long a = 4294967295;
  cout  <<"Long Output =" << a  << endl;
  }
  
 void floatFun(){
float a = 5693.12345f;
  cout  <<"Float Output =" << fixed<<setprecision(15) << a  << endl;
  }
  
  void doubleFun(){
double a = 5693.123456789123;
  cout  <<  "Double Output =" <<a  << endl;
  }
  
    void longDoubleFun(){
long double a = 5693.123456789123456;
  cout  <<"Long Double Output =" << a  << endl;
  }
  void wideCharFun(){
  wchar_t a = L'Ԃ';
   cout << "wideChar Output =" << a<< endl;
   //wcout << a;
   }
  
  int  main()
  {
  			charFun();
  			boolFun();
  			shortFun();
  			intFun();
  			longFun();
  			floatFun();
  			doubleFun();
  			longDoubleFun();
  			wideCharFun();
  }
