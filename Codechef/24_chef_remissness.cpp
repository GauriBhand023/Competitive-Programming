#include <iostream>
using namespace std;

int main() {
	int t,a,b,min,max;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>a>>b;
	    if(a>b){
	    cout<<a<<endl;
	    cout<<a+b<<endl;
     	}
	    else{
	    cout<<b<<endl;
	    cout<<a+b<<endl;
	    }
	}
	return 0;
}
