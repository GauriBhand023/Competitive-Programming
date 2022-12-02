#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  string s;
  cin>>s;
  string g;
  cin>>g;
  for(int i=0; i<5; i++){
    if(s[i]==g[i]){
        cout<<'G';
    }
    else{
        cout<<'B';
    }
  }
  cout<<endl;
}
return 0;
}