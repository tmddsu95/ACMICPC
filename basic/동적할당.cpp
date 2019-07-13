//#define _CRT_SECURE_NO_WARNINGS //scanf오류
#include <iostream>
// 동적할당
// 사용자가 입력한 수 num 만큼 동적으로 공간을 할당한다.

using namespace std;

int main(void)
{
	int *p;
	int num;
	cout << "크기 입력: ";
	cin >> num;

	p = new int[num]; //num의 크기 만큼 int형 공간 생성
	
	for (int i = 0; i < num; i++)
	{
		printf("%d번째 수 입력:",i+1);
		cin >> p[i];
	}

	for (int i = 0; i < num; i++) printf("%d번째 수는 %d입니다.\n", i + 1, p[i]);

	delete []p;

	return 0;
}
