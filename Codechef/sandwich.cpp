#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        int total = 0;
        for (int i = 0; i < a; i++)
        {
            total = total + arr[i];
        }
        if (total % 2 == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << total / 2 + 1 << " " << total / 2 << endl;
        }
    }
    return 0;
}