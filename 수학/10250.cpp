#include <iostream>
#include <algorithm>
#include <cmath>
//10250 ACM호텔
using namespace std;

int main(void)
{
	int t;
	int h, w, n;
	int a = 0, b =0;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;

		if (n % h == 0) { // 맨 꼭대기층 오는 경우
			a = h;
			b = n / h;
		}
		else if (n % h != 0) { //꼭대기 층 아닌경우
			a = n % h;
			b = (n / h) + 1;
		}
		if (b < 10) { // 호수가 10 이하이면 0 붙여준다 
			cout << a << "0" << b << endl;
		}
		else if (b >= 10) {
			cout << a <<  b << endl;
		}
	}
	
	return 0;
}
