#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;
  cin>>n;
  int c=0;
  int ans=0;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
    if(arr[i]==0){
      c=0;
    }
    else{
      c++;
    }
    ans+=c;
  }
  cout<<ans<<endl;
}
return 0;
}