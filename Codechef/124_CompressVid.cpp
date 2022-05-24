#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int count = 0, pre = 0;
        for (int i = 0; i < x; i++) {
            int a;
            cin >> a;
            count += a != pre;
            pre = a;
        }
        cout << count << endl;
    }
    return 0;
}