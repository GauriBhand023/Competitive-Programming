#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  float n,x,y,a,b;
  cin>>n>>x>>y>>a>>b;
  if((x/a)<(y/b)){
    cout<<"PETROL"<<endl;
  }
  else if((x/a)>(y/b)){
    cout<<"DIESEL"<<endl;
  }
  else{
    cout<<"ANY"<<endl;
  }
}
return 0;
}