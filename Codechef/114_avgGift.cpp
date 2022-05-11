#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;
cin>>t;
while(t--){
  int n,x;
  cin>>n>>x;
  int arr[n];
  for(int i=0; i<n;i++){
     cin>>arr[i];
  }
  int c =0;
  for(int i=0; i<n; i++){
      c=c+arr[i];
  }
  if(c/n==x){
      cout<<"yes"<<endl;
  }
  else{
      cout<<"no"<<endl;
  }
}
return 0;
}