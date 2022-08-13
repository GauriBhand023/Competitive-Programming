#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a;
    cin >> a;
    for (int i = 1; i * i <= a; ++i)
    {
        if ((a - 2 * i) % (i + 2) == 0 && a != 2 * i)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}