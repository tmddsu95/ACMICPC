#include <iostream>
#define MAX 247000
using namespace std;

int main(void)
{
	int n;
	int cnt = 0;
	int a[MAX+1] = { 0,};
	a[1] = 1;
	
	for (int i = 2; i < MAX + 1; i++)
		for (int j = 2; i*j < MAX + 1; j++)
			a[i*j] = 1;

	do{
		cin >> n;
		if (n == 0) return 0;

		for (int i = n+1; i < 2 * n + 1; i++)
			if (!a[i]) cnt++;

		cout << cnt << "\n";
		cnt = 0;
		
	} while (n != 0);

}
