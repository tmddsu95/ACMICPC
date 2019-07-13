// 배열로 풀어서 시간초과 뜸.. 스택 이용해서 다시 풀기 
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void)
{
	int n;
	int* a;
	int* b;
	cin >> n;
	a = new int[n];//동적할당
	b = new int[n];//오큰수

	stack  <int> st;



	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	for (int i = 0; i < n-1; i++) {
		for(int j=i+1; j<n;j++){
			if (a[i] < a[j]) {
				b[i] = a[j];
				break;
			}
			else b[i] = -1;
		}
		
	}
	b[n-1] = -1;
	

	for (int i = 0; i < n; i++) cout << b[i] <<" " ;

	return 0;
}
