//메모리초과로 실패
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
//카운팅정렬 
using namespace std;

int main(void)
{
	int cnt[10000] = {0,};
	int *data; //동적할당
	int n;

	scanf("%d", &n);
	data = new int[n];//n개의 데이터 가지는 동적할당 배열 생성

	for (int i = 0; i < n; i++) {
		scanf("%d", &data[i]);
		cnt[data[i] - 1]++;
	}

	for (int i = 0; i < 10000; i++) {
		if (cnt[i] != 0) {
			for (int j = 0; j < cnt[i]; j++) {
				printf("%d\n", i + 1);
			}
		}
	}

	delete[]data;

	return 0;
}
