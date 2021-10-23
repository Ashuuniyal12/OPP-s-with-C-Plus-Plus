#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
  int temp=*x;
  *x=*y;
  *y=temp;
   cout<<"swap value in swap function "<<*x<<" "<<*y<<endl;
 }
int main()
{
 int a=10;
 int b=20;
  cout<<"value before swap "<<a<<" "<<b<<endl;
 swap(&a,&b);
 cout<<"value after swap in main function "<<a<<" "<<b<<endl;
 return 0;
 }
