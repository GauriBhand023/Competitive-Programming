#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;
cin>>t;
while(t--){
  int a,b,c,d,e,f;
  cin>>a>>b>>c>>d;
  e=a+c*d;
  f=max(a,max(b,max(c,d)));
  if(e>f){
      cout<<"overFlow"<<endl;
  }
  else if(e<f){
      cout<<"unfilled"<<endl;
  }
  else{
      cout<<"filled"<<endl;
  }
}
return 0;
}