#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
	while(t--){
	    int n,k;cin>>n>>k;int a[n];
	    int cnt=0;
	    for(int i=0;i<n;i++){cin>>a[i];
	        if(a[i]%2==0)cnt++;}   
	  if((k==0)&&(cnt<n)){
            cout<<"YES"<<endl;
        }
        else if((k==0)&&(cnt==n)){
            cout<<"NO"<<endl;
        }
        else if(cnt>=k){
            cout<<"YES"<<endl;
        }
        else if(cnt<k){
            cout<<"NO"<<endl;
        }
	}
	return 0;
}
