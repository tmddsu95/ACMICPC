#define _CRT_SECURE_NO_WARNINGS //scanf오류
#include <iostream>
#include <algorithm>
#include <vector>
//1181 단어 정렬하기
// 동적할당
using namespace std;

struct Word {
	int len;
	char str[51];
};

bool compare(const Word &s1, const Word &s2)
{
	if (s1.len == s2.len) {
		for (int i = 0; i < s1.len; i++) {
			if (s1.str[i] == s2.str[i]) continue;
			else if (s1.str[i] < s2.str[i]) return true;
			else return false;
		}
	}
	return s1.len < s2.len; //사이즈 다르면 길이 작은게 앞으로 
}

int main(void)
{
	int n;
	cin >> n;
	Word *word = new Word[n]; //동적할당

	for (int i = 0; i < n; i++) {
		scanf("%s", word[i].str);
		word[i].len = strlen(word[i].str);
	}

	sort(word, word + n, compare);

	for (int i = 0; i < n; i++) {
		if (i != 0) {
			if (!strcmp(word[i].str, word[i - 1].str))
				continue;
		}
		printf("%s\n", word[i].str);
	}

	delete[]word; // 메모리 할당해제

	return 0;
}
