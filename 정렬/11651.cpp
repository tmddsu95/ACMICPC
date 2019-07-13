#define _CRT_SECURE_NO_WARNINGS //scanf오류
#include <iostream>
#include <algorithm>
#include <vector>
//오름차순 정렬
using namespace std;

bool compare(pair<int ,int>p1, pair<int,int> p2) 
{
	if (p1.second != p2.second)//y좌표가 다르면 y좌표 증가하는 순으로 
		return p1.second < p2.second;
	else // y좌표 다르면 x좌표 증가하는 순으로
		return p1.first < p2.first;
}

int main(void)
{
	int n;
	int x, y;
	pair<int, int> p[100000];
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x ,&y);
		p[i] = make_pair(x, y); //좌표 순서쌍 생성
	}

	sort(p, p + n, compare);

	for (int i = 0; i < n; i++) 
		printf("%d %d\n", p[i].first, p[i].second);

	return 0;
}
