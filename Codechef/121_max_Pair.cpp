#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        vector<pair<int, int>> a(x);
        for (int i = 0; i < x; i++)
        {
            cin >> a[i].second;
            a[i].first = a[i].second % y;
        }
        sort(a.begin(), a.end());
        int fin = -1e15;
        for (int i = 0; i < x; i++)
            fin = max(fin, 2 * a[i].second);
        for (int iter = 0; iter < 2; iter++)
        {
            int res = 0, max_found = -1e15;
            for (int i = 0; i < x; i++)
            {
                res = max(res, a[i].first + a[i].second + max_found + iter * y);
                if (!iter || (i + 1 < x && a[i + 1].first != a[i].first))
                    max_found = max(max_found, a[i].second - a[i].first);
            }
            fin = max(fin, res);
            reverse(a.begin(), a.end());
        }
        cout << fin << '\n';
    }
    return 0;
}