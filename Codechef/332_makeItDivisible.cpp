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
    while (t--){
        int n;
        cin >> n;
        int a[n] = {0};
        a[0] = 3;
        a[n - 1] = 3;
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}