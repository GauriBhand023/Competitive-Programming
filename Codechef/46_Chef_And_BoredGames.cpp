#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int sum=0;
	    for(int i=1;i<=n;i++) {
	        int a;
	        if(i%2==1){
	            a=i;
	            sum+=((n-a)+1)*((n-a)+1);
	        }
	    }
	    cout<<sum<<endl;   
	}
	return 0;
}
