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
    int a, b, c;
    cin >> a >> b >> c;
    if (c > a && c > b)
    {
      cout << "Charlie" << endl;
    }
    else if (b > a && b > c)
    {
      cout << "Bob" << endl;
    }
    else if (a > b && a > c)
    {
      cout << "Alice" << endl;
    }
  }
  return 0;
}