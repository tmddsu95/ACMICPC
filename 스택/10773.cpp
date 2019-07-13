#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void)
{
	int k,n;
	int sum = 0;
	cin >> k;
	stack <int> st;
	for (int i = 0; i < k; i++) {
		cin >> n;
		if (n == 0) {
			st.pop(); //0일 경우에는 최근에 쓴 수 지움
		}
		else {
			st.push(n);
		}
	}

	while (!st.empty()) {
		sum += st.top();
		st.pop();
	}

	cout << sum << endl;

	return 0;
}
