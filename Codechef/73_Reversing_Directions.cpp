#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s[n],s1[n];
	    for(int i=0;i<n;i++) {
	        cin>>s[i];
	        getline(cin,s1[i]);
	    }
	    for(int i=0;i<n;i++){
	        if(i==0){
	            cout<<"Begin";
	        }
	        else if(s[n-i]=="Left"){
	            cout<<"Right";
	        }
	        else {
	            cout<<"Left";
	        }
	        cout<<s1[n-i-1]<<endl;
	    }
	    cout<<endl;  
	}
	return 0;
}
