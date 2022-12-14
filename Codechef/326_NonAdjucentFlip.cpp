#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void lets(){
    int n;
    bool chk1 = false, chk2 = false;
    cin >> n;
    string s;
    cin >> s;
    for (auto i : s){
        if (i == '1') {
            chk1 = true;
            break;
        }   
    }
    for (int i = 0; i < n - 1; i++){
        if ((s[i] == '1') && (s[i + 1] == '1')){
            chk2 = true;
            break;
        }        
    }
    if (chk2){
        cout << 2 << "\n";
    }
    else if (chk1){
        cout << 1 << "\n";
    }
    else{
        cout << 0 << "\n";
    }
}
int main(){
    wasif();
    int T;
    cin >> T;
    while (T--){
        lets();
    } 
    return 0;
}