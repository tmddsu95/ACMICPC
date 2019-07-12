#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	string str;
	getline(cin, str); // 공백까지 포함하여 문자열 입력받기


	for (int i = 0; i < str.length(); i++) {
		if ((str[i] >= 'A'&& str[i] <= 'A' + 12) || (str[i] >= 'a'&&str[i] <= 'a' + 12)) //그래야 13더해도 안넘어감
			cout << (char)(str[i] + 13); // 13미뤄서 출력하기
		else if ((str[i] >= 0 && str[i] <= '9') || (str[i] == ' ')) //숫자거나 공백인 경우
			cout << str[i];
		else
			cout << (char)(str[i] - 13);
	}
	

	return 0;
}
