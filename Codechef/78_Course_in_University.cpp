#include <bits/stdc++.h>
using namespace std;
#define z long long int
void solve(){
    z n;
    cin>>n;
    z arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<(n-arr[n-1])<<endl;
}
int main(){
	z t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
