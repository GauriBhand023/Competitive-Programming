#include<bits/stdc++.h>
using namespace std;

void solve(long long n){
    long long x=0, y=0, a=0, b=0;
    
    for(long long i=0; i<(4L*n - 1); i++){
        cin>>a>>b;
        
        x ^= a;
        y ^= b;
    }
    cout<<x<<" "<<y<<"\n";
    return;
}
int main(){
    long long t, n;
    cin>>t;
    while(t--){
        cin>>n;
        solve(n);
    }
    
    return 0;
}