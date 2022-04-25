#include <bits/stdc++.h>
#include <cstring>
#include <algorithm>
#define ll long long
#define min(a, b) ((a < b) ? a : b)
using namespace std;

int main()
{
    const int MID = 1e9 + 7;
    int a[100005];
    a[1] = 1;
    for (int i = 2; i < 100005; i++)
    {
        a[i] = (a[i - 1] * 2) % MID;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << a[n] << endl;
    }
}