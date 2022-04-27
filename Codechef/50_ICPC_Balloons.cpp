#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int c = 0;
        int i;
        for (i = 0; i < n; i++)
        {
            if (a[i] >= 1 && a[i] <= 7)
                c++;
            if (c >= 7)
                break;
        }
        cout << i + 1 << endl;
    }
    return 0;
}