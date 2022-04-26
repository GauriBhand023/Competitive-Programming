#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n = n * 4 - 1;
        int x[n], y[n];
        for (int i = 0; i < n; i++)
        {
            cin >> x[i] >> y[i];
        }
        sort(x, x + n);
        sort(y, y + n);
        for (int i = 0; i < n; i += 2)
        {
            if (x[i] != x[i + 1])
            {
                cout << x[i] << " ";
                break;
            }
        }
        for (int i = 0; i < n; i += 2)
        {
            if (y[i] != y[i + 1])
            {
                cout << y[i] << endl;
                break;
            }
        }
    }
    return 0;
}