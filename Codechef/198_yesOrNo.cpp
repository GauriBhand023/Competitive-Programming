#include<iostream>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  string s;
  cin>>s;
  if(s=="YES" && s=="yES" && s=="yes" && s=="Yes" && s=="YeS"){
    cout<<"YES"<<endl;
  }
  else if(s=="Noo" && s=="orZ" && s=="yEz" && s=="Yas" && s=="XES"){
    cout<<"NO"<<endl;
  }
}
return 0;
}