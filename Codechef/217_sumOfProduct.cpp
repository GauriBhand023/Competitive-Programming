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
  for(int i=0; i<n; i++){
    int temp;
    cin>>temp;
    if(temp==1){
      c++;
    }
    else{
      ans+=(c*(c+1)/2);
      c=0;
    }
  }
  ans+=(c*(c+1)/2);
  cout<<ans<<endl;
   
}
return 0;
}