#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
//동적계획법 메모이제이션
//다이나믹 프로그래밍 dp

class makeOne {
private:
	int n;
	int arr[1000001];
public:
	void setNum() {
		cin >> n;
		memset(arr, 0, sizeof(int)*(n + 1));//n이 정해지면 , 1부터 n+1까지의 배열을 모두 0으로 만듬
	}

	//button up방식
	//1을 빼는 계산부터 시작해서 작은 계산을 통해 미리 arr[i]에 최대값을 메모이제이션한다.
	//2로 나누어떨어지는지 3으로 나누어 떨어지는 경우는 앞에 계산한 arr[1/2]arr[i/3]
	//그리고 현재의 arr[i]와 비교를 하여 그중 최소값을 다시 arr[i]에 저장 = 메모이제이션 한다.

	void solution()
	{
		arr[1] = 0; // 1일 때 횟수는 0
		for (int i = 2; i <= n; i++) {
			arr[i] = arr[i - 1] + 1; //규직 3번 : 1을 뺀다.
			if (i % 2 == 0)
				arr[i] = min(arr[i], arr[i / 2] + 1); //규칙2번 : 2 로 나누어떨어지는 경우
			if (i % 3 == 0)
				arr[i] = min(arr[i], arr[i / 3] + 1);//규칙 3번 : 3으로 나누어 떨어지는 경우

		}
	}

	void printNum() {
		cout << arr[n];
	}
};

int main(void)
{
	makeOne one;
	one.setNum();
	one.solution();
	one.printNum();

	return 0;
}
