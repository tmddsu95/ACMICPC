#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
//브루트 포스
//2231
using namespace std;

int main(void)
{
	int n;
	int tmp, sum, j;
	cin >> n;

	for (int i = 1; i < n; i++) {
		tmp = i;
		sum = i;
		j = i;
		while (j != 0) {
			sum += j % 10;
			j /= 10;
		}
		if (sum == n) {
			cout << tmp;
			return 0;
		}
	}
	cout << "0" << endl;

}
