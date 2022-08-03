#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a = 0, y = 0;
        cin >> a >> y;
        int temp1 = (a % 2 == 1) ? a - 1 : a;
        int temp2 = (y % 2 == 1) ? y - 1 : y;
        cout << (a * y) - (temp1 * temp2) << endl;
    }

    return 0;
}