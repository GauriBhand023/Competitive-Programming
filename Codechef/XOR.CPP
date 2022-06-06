#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int c = 0;
        int cnt = 0;
        for (int i = a; i <= b; i++)
        {
            int d = i;
            int e = i + 1;
            int f = i + 2;
            int g = i + 3;
            if ((d ^ e ^ f ^ g) == 0 && g <= b)
            {
                c = 1;
                cout << d << " " << e << " " << f << " " << g << endl;
                break;
            }
            else
            {
                cnt++;
                if (cnt > 10)
                    break;
            }
        }
        if (c == 0)
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}