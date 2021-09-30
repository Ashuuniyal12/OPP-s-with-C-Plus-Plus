#include <iostream>
using namespace std;
namespace first
{
int add(int a , int b)
{
  return (a+b);
}
}
namespace second
{
float add(float a , float b)
{
  return (a+b);
}
}
int main()
{
    cout <<"Sum is : " <<add(1,2)<<endl;
    cout <<"Sum is : " <<add(1.2,2.3)<<endl;
    cout <<"Sum is : " <<add(2,2.1)<<endl;
  return 0;
}

