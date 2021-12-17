#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */
    int m = 4 ,n= 6 ;
	int a[m ][n ] = { { 1, 2, 3, 4, 5, 6 },
					{ 7, 8, 9, 10, 11, 12 },
					{ 13, 14, 15, 16, 17, 18 },
	                { 19, 20, 21, 22, 23, 24}};
					 
	int i, k = 0, l = 0;
	
	while (k < m && l < n) {

		for (i = l; i < n; ++i) {
			cout << a[k][i] << " ";
		}
		k++;

		for (i = k; i < m; ++i) {
			cout << a[i][n - 1] << " ";
		}
		n--;

		if (k < m) {
			for (i = n - 1; i >= l; --i) {
				cout << a[m - 1][i] << " ";
			}
			m--;
		}
		
		if (l < n) {
            for (i = m - 1; i >= k; --i) {
                cout << a[i][l] << " ";
            }
            l++;
        }
	}
	
	return 0;
}
