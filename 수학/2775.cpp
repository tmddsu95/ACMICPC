#include <iostream>
#include <algorithm>
#include <cmath>
//2775 부녀회장이 될테야
//a[i][j] = a[i][j - 1] + a[i - 1][j]; 
using namespace std;

int main(void)
{
	int a[15][15];
	int t;
	cin >> t;
	int k, n;

	for (int i = 1; i < 15; i++) {
		a[0][i] = i + 1;
		a[i][0] = 1;
	}

	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			a[i][j] = a[i][j - 1] + a[i - 1][j];
		}
	}

	for (int i = 0; i < t; i++) {
		cin >> k >> n;
		cout << a[k][n-1]<<endl;
	}
	return 0;
}
