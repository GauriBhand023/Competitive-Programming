#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b;
  cin>>a>>b;
  int m = max(a,b);
  int n = min(a,b);
  int flag = 0;
  while(n<=m){
    if(n==m){
      cout<<"YES"<<endl;
      flag = 1;
    }
    n*=2;
  }
  if(flag==0){
    cout<<"NO"<<endl;
  }
}
return 0;
}