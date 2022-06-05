#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b;
  cin>>a>>b;
  if(b>=a && b<=a+200){
      cout<<"YES"<<endl;
  }
  else{
      cout<<"NO"<<endl;
  }
}
return 0;
}