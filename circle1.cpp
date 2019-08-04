
#include <iostream>

int main()
{
	using namespace std;
	int sum, n, m;
	sum = 0;
	cin >> n >> m;
	while (n<m+1)
	{
		sum = sum + n;
		n = n + 1;
	}
	cout << sum;
	cin.get();
	cin.get();
	return 0;
}
