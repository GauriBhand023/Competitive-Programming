#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void sol(){
     long long n, maxn = -1;
  cin>>n;
  map<ll,ll> a;
  for(int i=0; i<n; i++){
    ll te;
    cin>>te;
    a[te]++;
  }
  for(auto i : a){
    maxn= max(maxn, i.second);
  }
  if(maxn>(n+1)/2){
    cout<<"NO"<<endl;
  }
  else{
    cout<<"Yes"<<endl;
  }

}

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
 sol();
}
return 0;
}