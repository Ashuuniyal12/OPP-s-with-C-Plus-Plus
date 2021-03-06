#include<iostream>

using namespace std;

int sqr(int x )
{
	if (x == 0 || x == 1)
        return x;
    int start = 1, end = x, ans;
    while (start <= end) {
        int mid = (start + end) / 2;
  
        if (mid * mid == x)
            return mid;
 
        if (mid <= x / mid) {
            start = mid + 1;
            ans = mid;
        }
        else
            end = mid - 1;
    }
    return ans;
}
int main()
{
	int a;
	cout<<"Enter a number\n";
	cin >> a;
	int count =0;
	
	for(int i=2;i<a;i++)
	{
		if(a%i==0)
			count++;
		if(count!=0)
			break;
	}
	if(count)
		cout<<a<<" is not a prime number";
	else
		cout<< a << " is a prime number";
}
