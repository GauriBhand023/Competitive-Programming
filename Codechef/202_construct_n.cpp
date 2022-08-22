#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve(int n)
{
    cin >> n;
    if (n < 7 && n % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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
        int a;
        solve(a);
    }
    return 0;
}