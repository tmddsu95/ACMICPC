#include <iostream>

using namespace std;

int main(void)
{
	int n, m;	
	cin >> m>> n;
	
	int *a = new int[n+1](); // 동적배열 할당 동시 0으로 초기화 

	a[1] = 1; //1은 소수 아님
	
	
	for (int i = 2; i <= n; i++) {
		for (int j = 2; i*j <= n; j++) {
			a[i*j] = 1;
		}
	}
	
	for (int i = m; i <= n; i++)
		if (!a[i]) cout <<i<<"\n";
		
	return 0;
}
