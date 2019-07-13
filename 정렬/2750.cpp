#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <vector>
//오름차순 정렬하기 
using namespace std;

void print(vector <int> &v, int n)
{
	for (int i = 0; i < n; i++)
		cout << v[i] << endl;
}

int main(void)
{
	int n;
	cin >> n;
	int x;
	vector <int> v; //int 형 벡터 생성

	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end(), less<int>());
	print(v, n);
	return 0;
}
