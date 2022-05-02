#include <bits/stdc++.h>
using namespace std;

typedef long long int ll; 
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll a,b;
	    cin>>a>>b;
	    ll even_a = a/2;
	    ll even_b = b/2;
	    ll odd_a = a-even_a;
	    ll odd_b = b-even_b;
	    cout<<(even_a*even_b)+(odd_a*odd_b)<<endl;
	}
	return 0;
}
