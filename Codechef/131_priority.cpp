#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b;
  cin>>a>>b;
  if(a==1){
      if(b%2){
          cout<<"ODD"<<endl;
      }
      else{
          cout<<"EVEN"<<endl;
      }
  }
  else{
      if(a==2){
          cout<<"ODD"<<endl;
      }
      else{
          cout<<"EVEN"<<endl;
      }
  }
}
return 0;
}