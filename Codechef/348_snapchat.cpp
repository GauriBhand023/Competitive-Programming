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
        int x[a], y[a];
        for (int i = 0; i < a; i++)
            cin >> x[i];
        for (int i = 0; i < a; i++)
            cin >> y[i];
        int p, ans;
        p = ans = 0;
        for (int i = 0; i < a; i++)
        {
            if (x[i] != 0 && y[i] != 0)
                p++;
            else
            {
                ans = max(ans, p);
                p = 0;
            }
        }
        ans = max(ans, p);
        cout << ans << endl;
    }
    return 0;
}