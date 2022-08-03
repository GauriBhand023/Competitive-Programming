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
    string s;
    cin >> a >> s;
    int b = count(s.begin(), s.end(), '0');
    int c = count(s.begin(), s.end(), '1');
    if (b < c)
    {
      string f1(c, '1');
      cout << f1 << endl;
    }
    else
    {
      string f1(b, '0');
      cout << f1 << endl;
    }
  }
  return 0;
}