#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b,c,d,e;
  cin>>a>>b>>c>>d>>e;
  int x = min(b,a-b+1);
  int y = min(c,a-c+1);
  int z = min(d,a-d+1);
  int t = min(e,a-e+1);

  cout<<min(abs(d-b)+abs(e-c),min(z,t)+min(x,y))<<endl;
}
return 0;
}