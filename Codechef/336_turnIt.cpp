#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
        long long  u,v,a,s;
	    cin>>u>>v>>a>>s;
	    u=(u*u)-(2*a*s);
	    v=v*v;
	    if(u<=v)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
}
return 0;
}