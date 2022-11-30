#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a;
  cin>>a;
  int arr[a];
  int cnt=0;
  for(int i=0; i<a; i++){
    cin>>arr[i];
    if(arr[i]%2)
    cnt++;
  }
  if(cnt==0 || cnt%2)
  cout<<"NO"<<endl;
  else
  cout<<"YES"<<endl;
}
return 0;
}