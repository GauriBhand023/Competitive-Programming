#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        if(n==1) cout<<"YES"<<endl;
        else{
            sort(a,a+n);
            if(a[0]+a[n-1]<=k){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }    
    }
	return 0;
}
