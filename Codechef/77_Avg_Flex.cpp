#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + n);
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			int l_e = 0;
			for (int j = 0; j < n; j++)
			{
				if (arr[j] <= arr[i])
					l_e++;
			}
			if (n - l_e < l_e)
			{
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
