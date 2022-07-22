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
    int sum = 0;
    int s, g, n, r;
    cin >> s >> g >> n >> r;
    if ((r / g) >= n)
    {
      cout << 0 << " "<<  n << endl;
    }
    else if ((r / s) < n)
    {
      cout << -1 << endl;
    }
    else
    {
      int a = (r-(g*n))/(s-g);
      if((r-(g*n))%(s-g)!=0){
        a+=1;
      }
      cout<<a<<" "<<n-a<<endl;
      
    }
  }
  return 0;
}