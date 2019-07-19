#include <iostream>
using namespace std;

int self(int n)
{
	int sum = n;
	while (n!=0) {
		if (n == 0) break;
		sum = sum + n % 10;
		n /= 10;
	}
	return sum;
	
}

int main(void)
{
	int a[100001] = {0};
	int tmp = 0;
	for (int i = 1; i < 10000; i++) 
		a[self(i)] = 1;
	
	for (int i = 1; i < 10000; i++)
		if (a[i] != 1) printf("%d\n", i);
		
	return 0;
}
