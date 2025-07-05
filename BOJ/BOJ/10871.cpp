#include <iostream>

int main(void)
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	int n, x, a;
	std::cin >> n >> x;
	while (n--)
	{
		std::cin >> a;
		if (a < x)
		{
			std::cout << a << ' ';
		}
	}
	return 0;
}