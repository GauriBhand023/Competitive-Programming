#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    if (c >= a && c < b)
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