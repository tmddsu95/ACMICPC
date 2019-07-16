#include <iostream>
#include <algorithm>
#include <vector>

//greedy
//1931 회의실 배정
using namespace std;

int main(void)
{
	int n, x, y;
	vector <pair<int, int>> v;
	int cnt = 1;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v.push_back(make_pair(y,x)); 
	}
	sort(v.begin(), v.end()); //회의 가장 빨리 끝나는 순으로 정렬
  
	int tmp = v[0].first; //가장빨리 회의 끝나는 시간
	
  for (int i = 1; i < n; i++) {
		if (v[i].second >= tmp) {
			cnt++;
			tmp = v[i].first;
		}
	}

	cout << cnt;
	return 0;
	
}
