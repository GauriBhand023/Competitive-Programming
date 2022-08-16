#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    int b, x;
    int a[b];
    for (int i = 0; i < b; i++)
    {
      cin >> a[i];
    }
    bool ans = true;
    for (int i = 0; i < b - 1; i++)
    {
      if (a[i] > a[i + 1])
      {
        if (a[i] + a[i + 1] <= x)
        {
          swap(a[i], a[i + 1]);
        }
        else
        {
          ans = false;
          break;
        }
      }
    }
    if (ans == true)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}