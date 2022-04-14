#include <bits/stdc++.h>
using namespace std;


void solve(string fparent, string child){
    map<char, int> m;
    for (int i = 0; i < fparent.size(); i++) {
        m[fparent[i]]++;
    }
    for (int i = 0; i < child.size(); i++){
        m[child[i]]--;
        if (m[child[i]] < 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main(){
    int t;
    cin >> t;
    while (t--) {
        string p;
        string e;
        cin >> p;
        cin >> e;
        string fparent = p + e;
        int nf_child;
        cin >> nf_child;
        string child;
        while (nf_child > 0){
            string child1;
            cin >> child1;
            child = child + child1;
            nf_child--;
        }
        solve(fparent, child);
    }
}