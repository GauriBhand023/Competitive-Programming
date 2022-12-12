#include <iostream>
#include<bits/stdc++.h>


using namespace std;


#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
#define fo(i,n) for(int i=0;i<n;i++)
#define in(a,n)	for(int i=0;i<n;i++) cin>>a[i];

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    in(a,n);
	    for(int i=7;i<=n;i++){
	        sort(a,a+i);
	        if(a[0]==1 && a[6]==7){
	            cout<<i<<endl;
	            break;
	            }
	    }
	}
	return 0;
}
