#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;
cin>>t;
while(t--){
  int a,b,m;
  cin>>a>>b>>m;
  if(a>b){
    cout<<min(a-b,m-a+b);
  }
  else{
    cout<<min(b-a, a+m-b);
  }
  cout<<endl;
}
return 0;
}