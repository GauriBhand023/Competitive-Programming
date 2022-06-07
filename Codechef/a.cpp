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
        int n, t1 = 0, t2 = 1, next = 0;
        cin >> n;
        for (int i = 1; i <= n; ++i)
        {
            if (i == 1)
            {
                cout << t1;
            }
            if (i == 2)
            {
                cout << t2;
            }
            next = t1 + t2;
            t1 = t2;
            t2 = next;
            cout << next << endl;
        }
        return 0;
    }
}