#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;
  cin>>n;
  string s,p;
  cin>>s>>p;
  sort(s.begin(),s.end());
  sort(p.begin(),p.end());
  if(s==p)
  cout<<"yes"<<endl;
  else
   cout<<"no"<<endl;
}
return 0;
}