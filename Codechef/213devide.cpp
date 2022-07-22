#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b,c,d;
  cin>>a>>b>>c;
  if(d>=c && d%a==0 && d%b!=0){
    cout<<d<<endl;
  }
  else{
    cout<<-1<<endl;
  }
}
return 0;
}