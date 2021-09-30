#include<iostream>
#include <iomanip>

 using namespace std;
  void charFun(){
  char a ='A';
  cout << "Char Size = " << sizeof(char)<< endl;
    cout << "Char Size = " << sizeof(a)<< endl;
  }
  
   void boolFun(){
  bool a = 9 <5;
  cout << "Char Size = " << sizeof(char)<< endl;
    cout << "Char Size = " << sizeof(a)<< endl;
  }
   void shortFun(){
  short  a = 32767;
 cout << "short  Size = " << sizeof(short)<< endl;
    cout << "short Size = " << sizeof(a)<< endl;
  }
  void intFun(){
  int a = 2147483645;
  cout << "int  Size = " << sizeof(int )<< endl;
    cout << "int  Size = " << sizeof(a)<< endl;
  }
    void longFun(){
long a = 4294967295;
  cout << "long  Size = " << sizeof(long )<< endl;
    cout << "long  Size = " << sizeof(a)<< endl;
  }
  
 void floatFun(){
float a = 5693.12345f;
  cout << "float Size = " << sizeof(float)<< endl;
    cout << "float Size = " << sizeof(a)<< endl;
  }
  
  void doubleFun(){
double a = 5693.123456789123;
  cout << "double Size = " << sizeof(double)<< endl;
    cout << "doubleSize = " << sizeof(a)<< endl;
  }
  
    void longDoubleFun(){
long double a = 5693.123456789123456L;
  cout << "long doube  Size = " << sizeof(long double )<< endl;
    cout << "long doube  Size = " << sizeof(a)<< endl;
  }
  void wideCharFun(){
  wchar_t a = L'Ԃ';
   cout << "wide char Size = " << sizeof(wchar_t)<< endl;
    cout << "wide char  Size = " << sizeof(a)<< endl;
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
