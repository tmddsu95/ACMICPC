#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
#include <string>
//9012 스택 기본 
using namespace std;

bool check(string str)
{
	int len = str.length();
	stack <char> st; //char타입 받는 스택 선언

	for (int i = 0; i < len; i++) {
		char c = str[i];

		if (c == '(') {//여는 괄호면 스택에 push
			st.push(str[i]);
		}
		else {
			if (!st.empty()) { // 스택 비어있지 않으면 pop
				st.pop();
			}
			else { //여는 괄호인데 스택 비어있으면
				return false;
			}

		}
	}
	return st.empty(); // 반복문 끝나고 스택 괄호 남아있으면 f
}

int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		
		if (check(str)) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}

	return 0;
}
