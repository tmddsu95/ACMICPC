#include <iostream>
#include <algorithm>
//1037 약수
using namespace std;

int main(void)
{
	int n;
	int* a;
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++) cin >> a[i];

	sort(a, a + n); //기본 오름차순 정렬 

	cout << a[0] * a[n - 1];

	return 0;
}
