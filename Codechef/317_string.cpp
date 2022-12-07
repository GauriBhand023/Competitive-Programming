#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define st unordered_set
 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;
  cin>>n;
  string str;
  cin>>str;
  string res = "";
  st<string>S;
  res=str[0];
  int l,mx,sum;
  l=mx=0;
  sum=1;
  for(int i=1; i<n; i++){
    if(str[i-1]!=str[i]){
        if(mx<sum){
            mx = sum;
            mx--;
        }
        if(S.find(res)!=S.end())
        l=max(l,sum);
        S.insert(res);
        res=str[i];
        sum=1;
    }
    else{
        sum++;
        res+=str[i];
    }
  }
  if(S.find(res)!=S.end()){
    l=max(l,sum);
  }
  else{
    if(mx<sum){
        mx=sum;
        mx--;
    }
  }
  int ans = max(l,mx);
  cout<<ans<<endl;
}
return 0;
}