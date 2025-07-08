#include "iostream"
#include "queue"
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cout.tie(0);
	int cmdN;
	cin >> cmdN;
	queue<int> q;
	while (cmdN--) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int x;
			cin >> x;
			q.push(x);
		}
		else if (cmd == "pop") {
			if (q.size() != 0) {
				cout << q.front() << '\n';
				q.pop();
			}
			else cout << -1 << '\n';
		}
		else if (cmd == "size") {
			cout << q.size() << '\n';
		}
		else if (cmd == "empty") {
			cout << q.empty() << '\n';
		}
		else if (cmd == "front") {
			if (q.size() != 0)cout << q.front() << '\n';
			else cout << -1 << '\n';
		}
		else if (cmd == "back") {
			if (q.size() != 0)cout << q.back() << '\n';
			else cout << -1 << '\n';
		}
	}
}