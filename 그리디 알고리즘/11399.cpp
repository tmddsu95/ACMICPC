#include <iostream>
#include <algorithm>
//11399번 : ATM 그리디 알고리즘

using namespace std;

int main(void)
{
	int a[1000] = {0};
	int tmp[1000] = {0};
	int n;
	int sum = 0;
	
	cin >> n;//정렬할 요소 개수 입력

	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);//배열을 오름차순으로 정렬


	//1 2 3 3 4 // 1 3 6 9 13
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			tmp[i] += a[j];
		}
		
		sum += tmp[i];
	}
	
//	for (int i = 0; i < n; i++) sum += tmp[i];
	cout << sum;
	return 0;
}
