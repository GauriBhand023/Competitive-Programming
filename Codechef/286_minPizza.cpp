#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b;
  cin>>a>>b;
  int temp=a*b;
  if(temp%4==0){
    temp=temp/4;
  }
  else{
    temp=temp/4+1;
  }
  cout<<temp<<endl;
}
return 0;
}