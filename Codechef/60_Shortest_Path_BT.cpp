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
		int c = 0;
		while (a != b)
		{
			c++;
			if (a > b)
			{
				a /= 2;
			}
			else
			{
				b /= 2;
			}
		}
		cout << c << endl;
	}
	return 0;
}
