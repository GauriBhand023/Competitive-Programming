#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,count=0,min=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    min=arr[0];
	    for(int i=0;i<n-1;i++){
	        if(min>(arr[i+1]-arr[i])){
	            min=(arr[i+1]-arr[i]);
	        }
	    }
	    cout<<min<<endl;
	    
	}
	return 0;
}
