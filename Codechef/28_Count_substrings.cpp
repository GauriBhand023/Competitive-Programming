#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>> t;	
	while(t--){
	    ll n;
	    cin>> n;	    
	    string s;	    
	    cin>> s;	    
	    ll count=0;	    
	    for(ll i=0; i<n; i++){
	        if(s[i]=='1'){
	            count++;
	        }
	    }	    
	    ll ans=count*(count+1);
	    ll ans1=ans/2;	    
	    cout<< ans1 << "\n";
	}
	return 0;
}
