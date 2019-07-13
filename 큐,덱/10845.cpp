#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	string str;
	queue <int> q;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push") {
			int a;
			cin >> a;
			q.push(a);
		}
		else if (str == "pop") {
			if (q.size()!=0) {
				cout << q.front() << endl;
				q.pop();
			}
			else {
				cout << "-1" << endl;
			}
		}
		else if (str == "size") {
			cout << q.size() << endl;
		}
		else if (str == "empty") {
			if (q.size()==0) cout << "1" << endl;
			else cout << "0" << endl;
		}
		else if (str == "front") {
			if (q.size()==0) cout << "-1" << endl;
			else cout << q.front() << endl;
		}
		else if (str == "back") {
			if (q.size()==0) cout << "-1" << endl;
			else cout << q.back() << endl;
		}
	}

	return 0;
}
