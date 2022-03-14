#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int t;cin>>t;
while(t--){
  int a,b;
  cin>>a;
  vector<int> freq(101);
  for(int i=0; i<a; i++){
      cin>>b;
      freq[b]++;
  }
  int ans=0, cnt=0;
  for(int i=0; i<=100; i++){
      if(freq[i]!=0){
          cnt+=freq[i];
          if(cnt>a-cnt)
          ans+=freq[i];
      }
  }
  cout<<ans<<endl;
}
return 0;
}