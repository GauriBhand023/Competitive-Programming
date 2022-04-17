#include <iostream>
using namespace std;
int main()
{
        int a, b, c, d;
        cin >> a >> b >> c;
        d = (20 - b) * 36;
        if (a < d + c)
        {
                cout << "YES" << endl;
        }
        else
        {
                cout << "NO" << endl;
        }
        return 0;
}
