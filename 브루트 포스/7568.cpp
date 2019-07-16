#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
//브루트 포스
//7568
using namespace std;

int n;
vector < pair<pair<int, int>, int>> v;

void print(void)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) continue; 
			else if (v[i].first.first < v[j].first.first &&
				v[i].first.second < v[j].first.second) //j의 키와 몸무게 둘다 큰경우
				v[i].second++;//i의 등수 떨어뜨린다.
		}
	}
	for (int i = 0; i < n; i++) cout << v[i].second << " ";
	cout << endl;
}

int main(void)
{
	int  x,y;
	
	cin >> n;
	

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v.push_back(make_pair(make_pair(x, y), 1));//초기 등수1등 
	}
	
	print();
	return 0;

}
