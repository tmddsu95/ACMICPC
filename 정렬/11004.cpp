#define _CRT_SECURE_NO_WARNINGS //scanf오류
#include <iostream>
#include <algorithm>
//오름차순 정렬
using namespace std;

int main(void)
{
	int n,k;
	int *p; // 동적할당
	scanf("%d %d", &n, &k);
	 
	p = new int[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &p[i]);
	}

	sort(p, p + n, less<int>());

	printf("%d\n", p[k - 1]);
	delete[]p;
	return 0;
}
