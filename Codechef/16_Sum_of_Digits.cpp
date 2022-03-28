#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int t;cin>>t;
int n;
cin>>n;
while(t--){
  int sum =0;
  while(n!=0){
      int y = n%10;
      sum+= y;
      n/= 10;
  }
  cout<<sum<<endl;
}
return 0;
}