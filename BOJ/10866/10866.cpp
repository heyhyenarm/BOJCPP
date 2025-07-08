#include "iostream"
#include "deque"
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cout.tie(0);
	int cmdN;
	cin >> cmdN;
	deque<int> dq;
	while (cmdN--) {
		string cmd;
		cin >> cmd;
		if (cmd == "push_front") {
			int x;
			cin >> x;
			dq.push_front(x);
		}
		else if (cmd == "push_back") {
			int x;
			cin >> x;
			dq.push_back(x);
		}
		else if (cmd == "pop_front") {
			if (dq.size() == 0) {
				cout << -1 << '\n';
				continue;
			}
			cout << dq.front() << '\n';
			dq.pop_front();
		}
		else if (cmd == "pop_back") {
			if (dq.size() == 0) {
				cout << -1 << '\n';
				continue;
			}
			cout << dq.back() << '\n';
			dq.pop_back();
		}
		else if (cmd == "size") {
			cout << dq.size() << '\n';
		}
		else if (cmd == "empty") {
			cout << dq.empty() << '\n';
		}
		else if (cmd == "front") {
			if (dq.size() == 0) {
				cout << -1 << '\n';
				continue;
			}
			cout << dq.front() << '\n';
		}
		else if (cmd == "back") {
			if (dq.size() == 0) {
				cout << -1 << '\n';
				continue;
			}
			cout << dq.back() << '\n';
		}
	}
}