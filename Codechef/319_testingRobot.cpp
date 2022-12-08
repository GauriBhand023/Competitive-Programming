#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n, x;
	    cin>>n>>x;
	    string s;
	    cin>>s;
	    set<int> A;
	    A.insert(x);
	    for(int i=0;i<n;i++){
	        if(s[i]=='R'){
	            x=x+1;
	            A.insert(x);
	        }
	        else{
	            x=x-1;
	            A.insert(x);
	        }
	    }
	    
	    cout<<A.size()<<endl;
	}
	return 0;
}
