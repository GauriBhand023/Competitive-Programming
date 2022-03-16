#include <bits/stdc++.h>
using namespace std;
int main() {
	int t=0;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    long A[a];
	    for(int i=0;i<a;i++)
	    cin>>A[i];
	    
	    sort(A,A+a);
	    long count=0;
	    for(int i=a-1;i>=0;i=i-2){
	        if(i>=0)
	        count+=A[i];
	    }
	    cout<<count<<endl; 
	}
	return 0;
}
