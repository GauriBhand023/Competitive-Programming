#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    if (a < b){
      cout << a;
    }
    else
    {
      cout << b;
    }
  }
  return 0;
}
