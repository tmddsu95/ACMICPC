#include <iostream>
#include <algorithm>
#include <cmath>
//2010 멀티탭 
//가장 마지막에 꽂는 멀티탭은 n개의 전원 연결 가능
//나머지는 모두 n-1개의 전원 연결 가능 
using namespace std;

int main(void)
{
	int n;
	int* a;
	cin >> n;
	int sum = 0;
	a = new int[n];

	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);//오름차순 정렬 가장큰 n찾기 
	for (int i = 0; i < n-1; i++) {
		a[i] = a[i]  - 1;
	
	}

	for (int i = 0; i < n; i++) sum += a[i];
	cout << sum;

	delete[]a;
	return 0;
}
