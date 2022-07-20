#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int x,y,z;
  cin>>x>>y>>z;
  int cnt=1;
  int a=y*z;
  while(x>a){
    cnt++;
    a=a+y*z;
  }
  cout<<cnt<<endl;
}
return 0;
}