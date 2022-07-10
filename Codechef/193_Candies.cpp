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
    int a, b;
    cin >> a >> b;
    int c = a - b;
    int buy = c / 4;
    if (b > a)
    {
      cout << "0" << endl;
    }
    else
    {
      if (c % 4 == 0)
      {
        cout << buy << endl;
      }
      else
      {
        cout << buy - 1 << endl;
      }
    }
  }
  return 0;
}