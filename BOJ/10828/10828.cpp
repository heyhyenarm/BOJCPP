#include "iostream"
#include "stack"
using namespace std;

//const int MX = 10000;
//int stack[MX];
//int pos = 0;
//
//void push(int n) {
//	stack[pos++] = n;
//}
//int pop() {
//	if (pos == 0)return -1;
//	return stack[pos--];
//}
//int size() {
//	return pos;
//}
//int empty() {
//	if (size() == 0)return 1;
//	return 0;
//}
//int top() {
//	return stack[pos - 1];
//}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int cmdAmt;
	cin >> cmdAmt;
	stack<int> s;
	while (cmdAmt--) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int n;
			cin >> n;
			s.push(n);
		}
		else if (cmd == "pop") {
			if (s.size() == 0) {
				cout << -1 << '\n';
				continue;
			}
			cout << s.top() << '\n';
			s.pop();
		}
		else if (cmd == "size") {
			cout << s.size() << '\n';
		}
		else if (cmd == "empty") {
			cout << s.empty() << '\n';
		}
		else if (cmd == "top") {
			if (s.size() == 0) {
				cout << -1 << '\n';
				continue;
			}
			cout << s.top() << '\n';
		}
	}
}