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
    int a;
    cin >> a;
    if (a <= 100)
    {
      cout << a << endl;
    }
    else if (a > 100 && a <= 1000)
    {
      cout << a - 25 << endl;
    }
    else if (a > 1000 && a <= 5000)
    {
      cout << a - 100 << endl;
    }
    else if (a > 5000)
    {
      cout << a - 500 << endl;
    }
  }
  return 0;
}