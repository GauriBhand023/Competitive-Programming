#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
    {
	int t;
	cin>>t;
	while(t)
	{
	    ll n;
	    cin>>n;
	    ll a[n];
	    ll ans=0;
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    sort(a, a+n);
	    for(int i=1; i<n;i++)
	    {
	        if(a[i]==a[i-1])
	        {
	            ans ++;
	        }
	    }
	    cout<<ans<<endl;
   
    t--;
	}
	return 0;
}
