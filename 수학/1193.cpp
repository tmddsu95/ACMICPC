#include <iostream>
#include <algorithm>
#include <cmath>
//1193 분수찾기
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int cnt =0,sum=0;//cnt 몇 번째 그룹인가
	int tmp;
	
	while (sum < n) {
		cnt++;
		sum += cnt;
	}
	tmp = cnt;

	int a = 1;
	int b= sum - cnt + 1; // 그룹의 첫번째 원소 
	for (int i = b; i < n; i++) {
		cnt--;
		a++;
	}
	if (tmp % 2 == 0) {
		cout << a << "/" << cnt << endl;
	}
	else if (tmp % 2 == 1) {
		
		cout << cnt << "/" << a << endl;
	}
	return 0;
}
