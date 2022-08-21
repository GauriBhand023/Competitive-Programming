#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int sum1(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return sum1(b, a % b);
}

void sol()
{
    long long a, b, c;
    cin >> a >> b;
    for (int i = 1; i < a; i++)
    {
        cin >> c;
        b = sum1(b, c);
    }
    cout << b * a << endl;
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