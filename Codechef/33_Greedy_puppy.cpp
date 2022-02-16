#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n,k;cin>>n>>k;
  int ans = n%k;
  for(int i = 1 ;i<=k;i++){
      if(ans<=n%i)ans=n%i;
  }
  cout<<ans<<endl;
}
return 0;
}