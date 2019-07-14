#include <iostream>

using namespace std;

int main(void)
{
	int n;
	int cnt = 0;
	cin >> n;

	while (n > 0) {
		if (n % 5 == 0) {
			n -= 5;
			cnt++;
		}
		else if (n % 3 == 0) {
			n -= 3;
			cnt++;
		}
		else if (n > 5) {
			n -= 5;
			cnt++;
		}
		else{
      cnt = -1;
      break;
        }
	}

	cout << cnt << endl;

	return 0;
}
