#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, m;
	cin >> n >> m;

	int cnt = 0;
	cnt += n - 1;
	cnt += n * (m - 1);

	cout << cnt;

	return 0;
}
