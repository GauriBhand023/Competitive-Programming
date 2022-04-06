#include <bits/stdc++.h>
using namespace std;

int is_pal(string s){
    string s2=s;
    reverse(s2.begin(), s2.end());
    if(s==s2) return 1;
    else return 0;
}


int main(){
    int t=1;
    cin>>t;
    while(t--){
        string s; cin>>s;
        s[s.size()];
        cout << (is_pal(s) ? "1\n" : "2\n");
    }
    return 0;
}