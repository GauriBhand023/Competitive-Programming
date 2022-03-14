#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll t;
cin>>t;
while(t--){
  ll g,p,X[10];
  cin>>g>>p;
  for(auto &x : X)
  cin>>x;
  ll before_chef = 0;
  for(ll i =g; i<10; i++)
  before_chef+=X[i];
  auto days = [&](ll people){
      return(people/p+(people%p!=0));
  };
  ll minn = days(before_chef+1);
  ll maxx = days(before_chef+X[g-1]);
  cout<<minn<<' '<<maxx<<endl;
}
return 0;
}