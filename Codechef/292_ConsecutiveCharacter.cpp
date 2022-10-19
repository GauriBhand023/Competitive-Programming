#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a;
  cin>>a;
  string s;
  cin>>s;
  int cnt=0;
  for(int i=s.length()-2;i>=0; i--){
    if(s[i]==s[i+1]){
        cnt++;
    }
  }
  cout<<cnt<<endl;
}
return 0;
}