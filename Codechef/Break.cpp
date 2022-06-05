#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b;
  cin>>a>>b;
  if(b==1){
      cout<<"YES"<<endl;
  }
  else if(a%2==0){
      if(b%2==0){
          cout<<"YES"<<endl;
      }
      else{
          if((a-b)%2!=0){
              cout<<"YES"<<endl;
          }
          else{
              cout<<"NO"<<endl;
          }
      }
  }
  else{
      if(b%2==0){
          cout<<"NO"<<endl;
      }
      else{
          cout<<"YES"<<endl;
      }
  }
}
return 0;
}