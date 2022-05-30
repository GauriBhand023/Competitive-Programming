#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int osm = 0, ans = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> x;
            osm |= x;
        }
        while (osm)
        {
            ans += osm % 2;
            osm /= 2;
        }
        cout << ans << "\n";
    }
    return 0;
}
