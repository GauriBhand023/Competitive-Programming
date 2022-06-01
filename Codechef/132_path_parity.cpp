#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int x,y;
  cin>>x>>y;
  if(y==1){
      cout<<"yes"<<endl;
  }
  else if (x%2==0){
      cout<<"yes"<<endl;
  }
  else{
      cout<<"no"<<endl;
  }
}
return 0;
}