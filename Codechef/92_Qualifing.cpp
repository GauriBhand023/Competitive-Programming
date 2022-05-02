#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	long long int n,k;
	cin>>t;
	while(t--){
	      cin>>n>>k;
	      long long int arr[n];
	      for(int i=1;i<=n;i++){
	            cin>>arr[i];
	      }
	      sort(arr+1,arr+n+1,greater<int>());
	      long long int i=k;
	      for(i=k;arr[i]==arr[k];i++);
	      cout<<i-1<<endl;
	}
	return 0;
}
