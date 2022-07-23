#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int x;
  int a,b,n;
  cin>>a>>b>>n;
  if(a%b==0){
    cout<<"-1"<<endl;
  }
  else{
  x=n;
  if(x%a!=0){
    x=n+a - (n%a);
  }
  for(x; !(x%a ==0 && x%b!=0);x=x+a);
    cout<<x<<endl;
  } 
}
return 0;
}