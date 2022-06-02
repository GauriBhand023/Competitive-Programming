#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, cnt = 0;
        cin >> x >> y;
        while (x != y)
        {
            if (x < y)
            {
                int t = y - x;
                cnt += t;
                x += t;
            }
            if (y < x)
            {
                if (x - y == 1)
                {
                    y += 2;
                    cnt++;
                }
                else
                {
                    int t = (x - y) / 2;
                    cnt += t;
                    t *= 2;
                    y += t;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}