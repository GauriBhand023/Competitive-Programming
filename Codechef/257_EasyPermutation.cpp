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
    for (int i = a; i >= 1; i--)
    {
      cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}