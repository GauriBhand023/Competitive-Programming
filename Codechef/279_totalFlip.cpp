#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int x,y;
  cin>>x>>y;
  int z=x-y;
  cout<<min(y,z)<<endl;
}
return 0;
}