#include <iostream>
#include <algorithm>
#include <cmath> //안쓰면 컴파일 에러남
//1977 완전제곱수 
using namespace std;

int main(void)
{
	int m, n;
	cin >> m >> n;//m부터 n까지
	int a[100] = { 0 };
	int cnt = 0;
	int sum = 0;
	int x = (int)sqrt(m); //7
	int y = (int)sqrt(n); // 10

	
		for (int j =x ; j <= y; j++) {
			if (j * j >= m && j * j <= n) {
				a[cnt] = j * j;
				sum += a[cnt];
					cnt++;
			}
		}	
		if (cnt == 0) {
			cout << "-1" << endl;
			return 0;
		}
	
		cout << sum << endl << a[0];
}
