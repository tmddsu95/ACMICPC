#include <iostream>

using namespace std;

int min(int a, int b, int x, int y)
{
	int min;
	min = a;
	if (b < min) min = b;
	if (x < min) min = x;
	if (y < min) min = y;
	return min;
}

int main(void)
{
	int x, y, w, h;
	int a, b;
	cin >> x >> y >> w >> h;

	a = w - x;
	b = h - y;
	
	cout << min(a, b, x, y)<<endl;


	return 0;
}
