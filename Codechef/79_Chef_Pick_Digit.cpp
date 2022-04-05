#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--){
        string str;
        cin >> str;
        map<int, int> mp;
        for (int i = 0; i < str.length(); i++) {
            mp[str[i] - '0']++;
        }
        set<char> st;
        for (int i = 6; i <= 9; i++){
            if (mp[i] == 0)
                continue;
            mp[i]--;
            for (int j = 0; j <= 9; j++){
               int t = i * 10 + j;
                if (mp[j] >= 1) {
                    if (t >= 65 && t <= 90) {
                        st.insert(t);
                    }
                }
            }
            mp[i]++;
        }
        if (st.size() == 0) {
            cout << endl;
            continue;
        }
        for (auto it : st){
            cout << it;
        }
       cout << endl;
    }
    return 0;
}