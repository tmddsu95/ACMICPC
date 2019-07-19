#include <iostream>
//2581 소수 
using namespace std;

int main(void)
{
	int m, n;
	int cnt = 0, sum = 0;
	int min;
	
	cin >> m >> n;

	int *a = new int[n+1]();
	a[1] = 1;

	for (int i = 2; i < n + 1; i++) {
		for (int j = 2; i*j < n+1; j++) {
			a[i*j] = 1;
		}
	}

	for (int i = m; i <= n; i++) {
		if (!a[i]) {
			sum += i;
			if (cnt == 0) {
				min = i; // 최소값 찾음 
			}
			cnt++;
		}
	}
	if (sum != 0) cout << sum << "\n" << min;
	else if (sum == 0) cout << "-1" << endl;
	

	return 0;

}
