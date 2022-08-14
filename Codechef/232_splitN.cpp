#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void sol()
{
    long long int n;
    cin >> n;
    cout << __builtin_popcountll(n) - 1 << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}