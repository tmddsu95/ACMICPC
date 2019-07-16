#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 500000
//브루트포스 , 완전탐색dfs
//2798 블랙잭
using namespace std;

int n, m;
vector<int> v;
int ans;

void FindCard(int i, int cnt, int sum)
{
	if (cnt == 3 && sum <= m) {
		ans = max(ans, sum);
	}
	if (i >= n || sum > m) return; //기저

	FindCard(i + 1, cnt + 1, sum + v[i]); //카드선택
	FindCard(i + 1, cnt, sum); //카드선택안함
}

int main(void)
{
	cin >> n >> m;
	v.resize(n);
	
	for (int i = 0; i < n; i++) cin >> v[i];
	FindCard(0,0,0);
	cout << ans << endl;
	
}
