#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n - 1; i++)
    {
      cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
      if (max < arr[i])
        max = arr[i];
    }
    if (max < n)
    {
      cout << max << endl;
    }
    else
      cout << n << endl;
  }
  return 0;
}