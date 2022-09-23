#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a;
    cin >> a;
    if (a <4)
    {
        cout << -1 << endl;
    }
    else if (a == 4)
    {
        cout << "2 4 1 3" << endl;
        return;
    }
    else
    {
        for (int i = 1; i <= a; i += 2)
        {
            cout << i << endl;
        }
        for (int i = 2; i <= a; i += 2)
        {
            cout << i << endl;
        }
    }
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