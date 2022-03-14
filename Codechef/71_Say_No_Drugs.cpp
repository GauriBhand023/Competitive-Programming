#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	ll int t,maxi=-1;
	cin>>t;
	ll int n,k,l,temp,nsp,a;
	while(t--){
	    cin>>n>>k>>l;
	    ll int arr[n];
	    for(ll int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    if(n==1) {cout<<"Yes\n"; continue;}
	    ll int maxi=*max_element(arr,arr+n-1);
	    ll int myf=arr[n-1];
	    a=maxi-myf;
	    if(a<0) cout<<"Yes\n";
	    else if(k<=0) cout<<"No\n";
	    else if(((l-1)*k) > a) cout<<"Yes\n";
	   else cout<<"No\n";	    
	}
	return 0;
}