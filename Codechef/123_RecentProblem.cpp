#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        map<string, int> count;
        for (int i = 0; i < a; i++)
        {
            string s;
            cin >> s;
            count[s]++;
        }
        cout << count["START38"] << ' ' << count["LTIME108"] << endl;
    }
    return 0;
}