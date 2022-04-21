#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define forn(i, e) for (int i = 0; i < e; i++)

void solve()
{
    int a;
    cin >> a;
    if (360 % a == 0)
        cout << 'y' << ' ';
    else
        cout << 'n' << ' ';
    if (a <= 360)
        cout << 'y' << ' ';
    else
        cout << 'n' << ' ';
    if (a * (a + 1) / 2 <= 360)
        cout << 'y' << ' ';
    else
        cout << 'n' << ' ';
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
