#define _CRT_SECURE_NO_WARNINGS //scanf오류
#include <iostream>
#include <algorithm>
#include <vector>
//11650 좌표 정렬하기
using namespace std;

bool compare(pair<int, int> p1, pair<int, int > p2) // a와 b 두개의 좌표 비교
{
	if (p1.first != p2.first)
		return p1.first < p2.first;
	else
		return p1.second < p2.second;
}

int main(void)
{
	int n;
	int x, y;
	pair<int, int> p[100000];
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x , &y);
		p[i] = make_pair(x, y);
	}
	sort(p, p + n, compare);
	for (int i = 0; i < n; i++) {
		printf("%d %d\n", p[i].first, p[i].second);
	}
}
