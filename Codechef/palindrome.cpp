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
  string f="";
  string sec="";
  for(int i=0; i<a; i++){
    if(i%2==1){
        f=f+s[i];
    }
    else{
        sec=sec+s[i];
    }
  }
  sort(f.begin(),f.end());
  sort(sec.begin(),sec.end());
  if(f!=sec){
    cout<<"NO"<<endl;
  }
  else{
    cout<<"YES"<<endl;
  }
}
return 0;
}