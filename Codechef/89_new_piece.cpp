#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	while(n--)
	{
	     int a,b,c,d;
	     cin>>a>>b>>c>>d;
	     if(a==c&&b==d)
	     {
	         cout<<"0";
	     }
	     else
	     {
	     if((a+c)%2==0&&(b+d)%2==0) cout<<"2";
	     else if((a+c)%2!=0&&(b+d)%2!=0) cout<<"2";
	     else if((a+c)%2!=0||(b+d)%2!=0) cout<<"1";
	     }
	     cout<<endl;
	     
	}
	return 0;
}
