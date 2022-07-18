#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		long long int d, c, c1 = 0, c2 = 0;
		cin >> d;
		int a[d];
		for (int j = 0; j < d; j++)
		{
			cin >> a[j];
			if (a[j] == 1)
			{
				c1++;
			}
			else if (a[j] == 2)
			{
				c2++;
			}
		}
		c = c1 * (d - c1) + c1 * (c1 - 1) / 2 + c2 * (c2 - 1) / 2;
		cout << c << endl;
	}
	return 0;
}
