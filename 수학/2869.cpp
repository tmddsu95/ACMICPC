#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int a, b, v;
	int ans = 0;
	cin >> a >> b >> v;

	ans = (v - b - 1) / (a - b) + 1;
	
	cout << ans ;
	
	return 0;
}
