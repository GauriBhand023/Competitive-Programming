#include <iostream>
using namespace std;
#define mini_number d;
int main() {
	
	int t;
	cin>>t;	
	while(t--)
	{
	    int a,b,c,d=0;
	     cin>>a>>b;
	    for(int i=0;i<a;i++)
	    {
	        cin>>c;
	        c=c+b;
	         if(c%7==0)
	            d++;
	        
	    }
	    
	    cout<<d<<endl;
	}
	return 0;
}
