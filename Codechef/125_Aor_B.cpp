#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--){
        int a, b;
        cin >> a >> b;
        int d = 500 - 2 * a + 1000 - 4 * (a + b);
        int e = 1000 - 4 * b + 500 - 2 * (a + b);
        cout << max(d, e) << endl;
    }
    return 0;
}