#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y;
    cin >> x >> y;
    if (x > 0 || y > 0)
    {
      if (x == y)
      {
        cout << "YES" << endl;
      }
      else
      {
        cout << "NO" << endl;
      }
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  return 0;
}
