#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b,c;
  cin>>a>>b>>c;
  int ar[a];
  for(int i=0; i<a; i++){
    cin>>ar[i];
  }
  ll  sum =0;
  int cnt =0 ;
  for(int i=0; i<a; i++){
    if(b-ar[i]>c){
        sum+=b;
        cnt+=c;
    }
    else
      sum+=ar[i];
  }
  cout<<sum-cnt<<endl;
}
return 0;
}