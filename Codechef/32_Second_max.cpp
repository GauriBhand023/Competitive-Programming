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
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
      cin >> arr[i];
    }
    sort(arr, arr + 3);
    cout << arr[1] << endl;
  }
  return 0;
}