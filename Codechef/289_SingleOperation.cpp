#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;
  cin>>n;
  string s;
  cin>>s;
  int count=0;
  for(int i=0; i<n; i++){
    if(s[i]=='1'){
        count++;
    }
    else{
        break;
    }
  }
  cout<<count<<endl;
}
return 0;
}