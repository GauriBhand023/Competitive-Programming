#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, e) for (int i = 0; i < e; i++)
void solve()
{
    int n;
    cin >> n;
    ll arr[n];
    ll sum = 0;
    forn(i, n)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    ll tot = sum / (n - 1);
    forn(i, n)
            cout
        << tot - arr[i] << ' ';
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
