#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (((c - b) / a) <= c)
        {
            cout << ((c - b) / a);
        }
    }
    return 0;
}