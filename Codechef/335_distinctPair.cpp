#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll a,r;
	    cin>>a>>r;
	    ll p=r-a+1;
	    if(p==1)cout<<1<<"\n";
	    else{
	        cout<<1+(2*(r-a))<<"\n";
	    }
	    
	}
	
	return 0;
}
