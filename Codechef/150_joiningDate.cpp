#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b;
  cin>>a>>b;
  int r = a/5;
  if(a%5==0){
    r--;
  }
  int f = b/5;
  if(b%5==0){
    f--;
  }
  cout<<r-f<<endl;
}
return 0;
}