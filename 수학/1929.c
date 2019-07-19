#include <stdio.h>

int main(void)
{
	int i, j;
	int m, n;
	int a[1000001] = { 0,1 }; //a[1]=1. 배열을 0으로 초기화 
	scanf("%d %d", &m, &n);
	for (i = 2; i <= n; i++)
		for (j = 2; i*j <= n; j++)
			a[i*j] = 1; // 소수가 아닌 경우엔 1로 만들어준다.

	for (i = m; i <= n; i++)
		if (!a[i])
			printf("%d\n", i);
	return 0;
}
