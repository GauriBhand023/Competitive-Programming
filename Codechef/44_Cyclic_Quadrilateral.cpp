#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a, b, c, d;
        cin >> a >> b >> c >> d;
        y = a + c;
        x = b + d;
        if (y == 180 and x == 180)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
