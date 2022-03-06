#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float h1, m1, h2, m2, t1, t2, c1, c2, dist;
        char c;
        cin >> h1 >> c >> m1;
        cin >> h2 >> c >> m2;
        cin >> dist;
        t1 = (h1 * 60) + m1;
        t2 = (h2 * 60) + m2;
        c1 = (t1 - t2) + dist;
        if (2 * dist <= t1 - t2) {
            c2 = t1 - t2;
        }
        else {
            c2 = 2 * dist - (2 * dist - (t1 - t2)) / 2;
        }
        cout << fixed << setprecision(1) << c1 << " " << c2 << endl;
    }
}