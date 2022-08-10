#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  if((a-c)<(b-d)){
    cout<<"FIRST"<<endl;
  }
  else if((a-c)==(b-d)){
    cout<<"ANY"<<endl;
  }
  else{
    cout<<"SECOND"<<endl;
  }
}
return 0;
}