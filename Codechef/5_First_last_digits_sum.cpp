#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;
  cin>>n;
  int rem = n%10;
  while(n>9){
      n = n/10;
  }
  cout<<n+rem<<endl;
}
return 0;
}