#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    int count=0;
	    
	    cin>>a>>b;
	    for(int i=a;i<=b;i++){
	        int ans=i%10;
	        if(ans==2 || ans==3|| ans==9) count++;
	    } cout<<count<<endl;
	}
	return 0;
}