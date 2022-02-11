#include <iostream>
#include<algorithm>
using namespace std;

int main() {
 	long long t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    long long a[n];
	    for (long long i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	   sort(a,a+n);
	   long long dif=(a[1]-a[0]); 
	   for (long long i=1;i<n-1;i++)
	    {
	       dif=min(dif,(a[i+1]-a[i]));
	    }
	    cout<<dif<<endl;  
	}
	return 0;
}
