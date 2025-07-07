#include "iostream"
#include "list"

using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cout.tie(0);

	list<char> linkedList;
	list<char>::iterator cursor;

	// 초기 문자열 입력. 
	string str;
	cin >> str;
	for (auto c : str)
	{
		linkedList.emplace_back(c);
	}
	cursor = linkedList.end();

	// 입력할 명령어 수.
	int cmdAmount;
	cin >> cmdAmount;

	// 명령어.
	while (cmdAmount--)
	{
		char cmd;
		cin >> cmd;
		switch (cmd)
		{
		case 'L':
			// 커서를 왼쪽으로 한 칸 옮김(맨 앞 제외).
			if (cursor == linkedList.begin())
			{
				break;
			}
			--cursor;
			break;
		case 'D':
			// 커서를 오른쪽으로 한 칸 옮김(맨 뒤 제외).
			if (cursor == linkedList.end())
			{
				break;
			}
			++cursor;
			break;
		case 'B':
			// 커서 왼쪽의 문자 삭제(커서가 맨 앞이면 무시).
			if (cursor == linkedList.begin())
			{
				break;
			}
			--cursor;
			cursor = linkedList.erase(cursor);
			break;
		case 'P':
			// 같이 입력된" $"의 $문자를 커서 왼쪽에 추가.
			char c;
			cin >> c;
			linkedList.emplace(cursor, c);
			break;
		default:
			break;
		}
	}

	// 출력.
	for (auto i : linkedList)
	{
		cout << i;
	}
}