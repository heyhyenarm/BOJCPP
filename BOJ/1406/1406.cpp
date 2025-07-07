#include "iostream"
#include "list"

using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cout.tie(0);

	list<char> linkedList;
	list<char>::iterator cursor;

	// �ʱ� ���ڿ� �Է�. 
	string str;
	cin >> str;
	for (auto c : str)
	{
		linkedList.emplace_back(c);
	}
	cursor = linkedList.end();

	// �Է��� ��ɾ� ��.
	int cmdAmount;
	cin >> cmdAmount;

	// ��ɾ�.
	while (cmdAmount--)
	{
		char cmd;
		cin >> cmd;
		switch (cmd)
		{
		case 'L':
			// Ŀ���� �������� �� ĭ �ű�(�� �� ����).
			if (cursor == linkedList.begin())
			{
				break;
			}
			--cursor;
			break;
		case 'D':
			// Ŀ���� ���������� �� ĭ �ű�(�� �� ����).
			if (cursor == linkedList.end())
			{
				break;
			}
			++cursor;
			break;
		case 'B':
			// Ŀ�� ������ ���� ����(Ŀ���� �� ���̸� ����).
			if (cursor == linkedList.begin())
			{
				break;
			}
			--cursor;
			cursor = linkedList.erase(cursor);
			break;
		case 'P':
			// ���� �Էµ�" $"�� $���ڸ� Ŀ�� ���ʿ� �߰�.
			char c;
			cin >> c;
			linkedList.emplace(cursor, c);
			break;
		default:
			break;
		}
	}

	// ���.
	for (auto i : linkedList)
	{
		cout << i;
	}
}