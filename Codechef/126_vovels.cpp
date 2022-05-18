#include <bits/stdc++.h>
using namespace std;
#define int long long
const int M = 1e9 + 7;

signed main()
{
    int t;
    cin >> t;
    set<char> special;
    special.insert('c');
    special.insert('g');
    special.insert('l');
    special.insert('r');
    while (t--){
        int a;
        string c;
        cin >> a >> c;
        long long ans = 1;
        for (char ch : c)
            if (special.find(ch) != special.end())
                ans = (ans * 2) % M;
        cout << ans << endl;
    }
    return 0;
}