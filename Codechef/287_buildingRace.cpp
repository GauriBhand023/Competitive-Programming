#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b,x,y;
  cin>>a>>b>>x>>y;
  float n=a/x;
  float m=b/y;

  if(m>n){
    cout<<"chef"<<endl;
  }
  else if(n>m){
    cout<<"chefina"<<endl;
  }
  else{
    cout<<"both"<<endl;
  }
}
return 0;
}