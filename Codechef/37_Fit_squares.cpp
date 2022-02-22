#include <iostream>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        if(n%2==1){
            n = n-1;
        }
        n/=2;
        int area = n*n;
        cout<<(area-n)/2<<endl;
        
    }
	return 0;
}
