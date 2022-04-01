#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int cnt=0;
        for (int i = 0; i <= n-1; i++)
        {
            int a;
            cin >> a;
            if (a % k == 0)
            {
                cnt++;
            }
        } 
    cout << cnt << endl;
    return 0;
}