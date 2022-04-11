#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long t;
    cin >> t;
    for (unsigned long long i = 0; i < t; i++) {
        unsigned long long n;
        cin >> n;
        if ((n/2) % 2 != 0) {
            cout << "NO" << endl;
        }
        else {
            cout<<"YES"<<endl;
            int e=2;
            int f=2;
            for (int i = 1; i < n + 1; i++){
                cout << i << ' ';
                if (e == 2) {
                    i += 2;
                    e = 1;
                }
                else{
                    e=2;
                }
            }
            cout<<endl;
            for (int i = n - 1; i >= 2; i--){
                cout<<i<<' ';
                if(f==2){
                    f=1;
                }
                else{
                    i-=2;
                    f=2;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}