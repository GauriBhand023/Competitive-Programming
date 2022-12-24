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
        ll x, y;
        cin >> x >> y;
        ll a = x * y;
        if (x == 1 && y == 1){
            cout << "0/1" << endl;
        }
        else if (x % 2 == 0 || y % 2 == 0){
            cout << "1/2" << endl;
        }
        else{
            long odd = a / 2;
            cout << odd << "/" << a << endl;
        }
    }
    return 0;
}