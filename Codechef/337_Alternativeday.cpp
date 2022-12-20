#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,p,q;
        cin>>a>>b>>p>>q;
        if(p%a!=0 || q%b!=0)
        {
            cout<<"NO"<<endl;
        }
        else if((p/a)+1==q/b || (p/a)-1==q/b || p/a==q/b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
