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
	    sort(a,a+n);
	    vector<int>v;
	    int count=1;
	    fo(i,n){
	        if(a[i]==a[i+1]){
	            count++;
	        }
	        else{
	            v.push_back(count);
	            count=1;
	        }
	    }
	    int m=v.size();
	    sort(v.begin(),v.end());
	    int sum=accumulate(v.begin(), v.end()-1, 0);
	    cout<<sum;
	    cout<<endl;
	}
	return 0;
}
