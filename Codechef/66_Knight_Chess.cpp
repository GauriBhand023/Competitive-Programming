#include <bits/stdc++.h>
using namespace std;

#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i] >> b[i];
        }
        int x, y;
        cin >> x >> y;
        int check = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == (x - 2) && b[i] == (y - 1)) {
                check = 1;
            }
            if (a[i] == (x - 2) && b[i] == (y + 1)) {
                check = 1;
            }
            if (a[i] == (x + 2) && b[i] == (y - 1)) {
                check = 1;
            }
            if (a[i] == (x + 2) && b[i] == (y + 1)) {
                check = 1;
            }
            if (a[i] == (x - 1) && b[i] == (y - 2)) {
                check = 1;
            }
            if (a[i] == (x + 1) && b[i] == (y - 2)){
                check = 1;
            }
            if (a[i] == (x - 1) && b[i] == (y + 2)) {
                check = 1;
            }
            if (a[i] == (x + 1) && b[i] == (y + 2)){
                check = 1;
            }
            if (check == 1){
                break;
            }
        }
        if (check == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
