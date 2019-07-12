#include <iostream>
#include <algorithm>

using namespace std;
bool check = false;
int main(void)
{
	int a[9];
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> a[i]; 
	}
	for (int i = 0; i < 9; i++) sum += a[i];
	int ans = 0;
	ans = sum-100;

	for (int i = 0; i < 9; i++) {
		for (int j = i+1; j < 9; j++) {
			if (a[i] + a[j] == ans ) {
				a[i] = 0;
				a[j] = 0;
				check = true;
				break;
			}
			if (check)
				break;
		}
	}
	sort(a, a + 9);//정렬
	for (int i = 2; i < 9; i++) cout << a[i] << endl;
	return 0;
}
