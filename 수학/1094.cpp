#include <iostream>
#include <algorithm>
//1094 막대기
using namespace std;
//입력한 수를 2진수로 변환하여 1의 개수를 출력한다.
void bin(int a[7], int n)
{
	int i = 0;
	while (n > 0) {
		a[i] = n % 2;
		i++;
		n /= 2;
	}
}
int main(void)
{
	int n;
	cin >> n;
	int a[7];//2진수 각자리 저장할 배열
	int cnt = 0;

	bin(a,n);

	for (int i = 0; i < 7; i++) {
		if (a[i] == 1) cnt++;
	}

	cout << cnt;
	return 0;
}
