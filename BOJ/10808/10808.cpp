#include "iostream"

using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int alpha[26];
	fill(alpha, alpha + 26, 0);
	string str;
	cin >> str;
	for (auto c : str)
	{
		alpha[c - 'a']++;
	}
	for (int i = 0;i < 26;++i)
	{
		cout << alpha[i] << ' ';
	}
}