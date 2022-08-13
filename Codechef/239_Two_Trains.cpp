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
        int a, y, n, x;
        cin >> n;
        y = 0;
        a = 0;
        for (int i = 1; i < n; ++i)
        {
            cin >> x;
            a += x;
            y = max(y, x);
        }
        cout << a + y << endl;
    }
    return 0;
}