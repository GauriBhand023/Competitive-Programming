#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int x, s=0;
  cin>>x;
  int a[x];
  for(int i=0; i<x; i++){
      cin>>a[i];
  }
  if(x%2==1){
      cout<<"-1"<<endl;
  }
  else{
      for(int i=0; i<x; i++){
          s=s+a[i];
      }
      if(s==0){
          cout<<"0"<<endl;
      }
      else if(s<0){
          cout<<abs(s/2)<<endl;
      }
      else{
          cout<<s/2<<endl;
      }
  }
}
return 0;
}