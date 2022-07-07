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
        long long n;
        cin >> n;
        string s;
        cin >> s;

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' && s[i + 1] == '0')
            {
                ans += 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}