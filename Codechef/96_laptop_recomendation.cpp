#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int T;cin>>T;
while(T--){
  int n, count=1, t=0,i; 
  int arr[i];
  cin>>n;
  for(int i=0; i<n; i++){
      
      cin>>arr[i];
  }
  for(int i=0; i<n-1;i++){
      if(arr[i]==arr[i+1])
      count++;
      t=arr[i];
  }
  int r=n/2;
  if(count>=(r+1))
  cout<<t<<endl;
  else
      cout<<"CONFUSED"<<endl; 
}
return 0;
}