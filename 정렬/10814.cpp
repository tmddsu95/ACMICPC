#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
//stable_sort 사용하지 않으면 시간 초과 문제 발생
bool compare(pair<int, string> v1, pair<int, string> v2)
{
	if (v1.first != v2.first) //나이 다른경우 나이순 정렬
		return v1.first < v2.first;
	else if (v1.first == v2.first)
		return false;
	return false;

}
int main(void)
{
	ios_base::sync_with_stdio(0); //scanf 시간 줄이기 
	cin.tie(0);

	int n;
	vector <pair<int, string>> v; // string때문에 vector 이용

	cin >> n;
	v.resize(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}

	stable_sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++)
		cout << v[i].first << " " << v[i].second << "\n";

	return 0;
}
