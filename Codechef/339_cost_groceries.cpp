#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  ll  n,x;
  cin>>n>>x;
  ll  a[n],b[n];
  for(int i=0; i<n; i++)
  cin>>a[i];

  for(int i=0; i<n; i++)
  cin>>b[i];

  ll ans =0; 
  for(int i=0; i<n; i++){
  if(x<=a[i])
  ans+=b[i];
  }
  cout<<ans<<endl;
}
return 0;
}