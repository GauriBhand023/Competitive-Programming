#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,l;
	    cin>>n>>k>>l;
	    int a[n];
	    int max=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i] > max) max=a[i];
	    }
	    if(max==a[n-1]){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        if(a[n-1]+ (l-1)*k > max){
	            cout<<"Yes"<<endl;
	        }
	        else{
	            cout<<"No"<<endl;
	        }
	    }
	}
	return 0;
}
