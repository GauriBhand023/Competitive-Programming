#include <iostream>
using namespace std;
int main()
{
    int y;
    cin >> y;
    while (y--)
    {
        int X;
        cin >> X;
        int H = 30;
        if (X > H)
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