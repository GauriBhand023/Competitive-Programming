#include <iostream>
using namespace std;
int main() {
	int c;
	cin>>c;
	while(c--){
	    float x,y,x1,y1,a,b;
	    cin>>x>>y>>x1>>y1;
	    int d;
	    cin>>d; 
	    if(min(x/x1,y/y1)>=d)
        cout<<"YES"<<endl;
	    else
         cout<<"NO"<<endl;
	}
	return 0;
}
