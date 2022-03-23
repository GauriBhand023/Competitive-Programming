#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t;cin>>t;
while(t--){
  long long int x=0, y=0;
  cin>>x>>y;
  cout<<__gcd(x,y)<<" "<<((x*y)/__gcd(x,y))<<endl;
}
return 0;
}