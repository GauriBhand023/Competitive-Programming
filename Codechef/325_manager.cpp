#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int *arr=new int[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    sort(arr,arr+n);
	    int f=1;
	    for(int i=0;i<n-1;i++)
	    {
	        if(arr[i]!=arr[i+1])
	        f++;
	    }
	    if(n-x<=f)
	    cout<<n-x<<endl;
	    else
	    cout<<f<<endl;
	}
	return 0;
}
