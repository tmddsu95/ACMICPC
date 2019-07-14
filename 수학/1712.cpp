#include <iostream>
#include <algorithm>
#include <cmath>
//1712 손익분기점
using namespace std;

int main(void)
{
	long long int a, b, c;
	cin >> a >> b >> c;

	
	long long int ans = a / (c - b)+1;
	

	if (c-b<=0) { //분모가 0보다 작아지는경우 손익분기점 불가능 
		cout << "-1" << endl;
		return 0;
	}
	cout << ans;
	
}
