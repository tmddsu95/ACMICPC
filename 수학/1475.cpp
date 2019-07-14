#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int n;
	int a[10] = {0}; // 각 자리수 개수
	cin >> n;


	while (true) {
		a[n % 10]++;
		if (n / 10 == 0) break;
		n /= 10;
	}

	int tmp1 = (a[6] + a[9] + 1) / 2;
	int tmp2 = 0;
	for (int i = 0; i < 10; i++) {
		if (i != 6 && i != 9) {
			if (a[i] > tmp2) {
				tmp2 = a[i];
			}
		}
	}

	int result = max(tmp1, tmp2);
	cout << result << endl;


	return 0;
}
