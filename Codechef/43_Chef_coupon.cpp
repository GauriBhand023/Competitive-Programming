#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		int n = a + a;
		int m = b;
		int a1, a2, a3, b1, b2, b3;
		cin >> a1 >> a2 >> a3;
		cin >> b1 >> b2 >> b3;
		if ((a1 + a2 + a3) < 150)
		{
			m += a;
		}
		if ((b1 + b2 + b3 < 150))
		{
			m += a;
		}
		if (m < n)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
