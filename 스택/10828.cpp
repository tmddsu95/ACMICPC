#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
#include <string>
//스택 기본
using namespace std;



int main(void)
{
	int n;
	string str;
	cin >> n;
	stack <int> st;

	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push") {
			int a;
			cin >> a;
			st.push(a);
		}
		else if (str == "pop") {
			if (!st.empty()) {
				cout << st.top() << endl;
				st.pop(); // 맨 위 원소 꺼내고 pop
			}
			else // 스택 비어있는 경우
				cout << "-1" << endl;
		}
		else if (str == "size") {
			cout << st.size() << endl;
		}
		else if (str == "empty") {
			if (st.empty()) cout << "1" << endl;
			else cout << "0" << endl;
		}
		else if (str == "top") {
			if (!st.empty()) cout << st.top() << endl;
			else cout << "-1" << endl;
 		}
	}

	

	return 0;
}
