#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n,cnt=0;
  cin>>n;
  string str;
  cin>>str;

  for(int i=0; i<n; i++){
  if(cnt>3){
    break;
  }
  if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ){
    cnt=0;
  }
  else{
    cnt++;
  }
}
if(cnt>3){
  cout<<"NO"<<endl;
}
else{
  cout<<"YES"<<endl;
}
}
return 0;
}