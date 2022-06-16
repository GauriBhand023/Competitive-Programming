#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int c = 0;
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
      cout << "0" << endl;
    }
    else if (b > a)
    {
      cout << b - a << endl;
    }
    else
    {
      if (b % 2 == 0)
      {
        cout << (a - b) / 2 << endl;
      }
      else
      {
        cout << (((a + 1 - b) / 2) + 1) << endl;
      }
    }
  }

  return 0;
}