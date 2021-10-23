
#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
  int temp=a;
  a=b;
  b=temp;
  cout<<"swap value in swap function "<<a<<" "<<b<<endl;
 }
int main()
{
 int a=10;
 int b=20;
  cout<<"value before swap "<<a<<" "<<b<<endl;
 swap(a,b);
cout<<"value after swap in main function "<<a<<" "<<b<<endl;
 return 0;
 }
