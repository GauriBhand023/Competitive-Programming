#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b;
  cin>>a>>b;
  int c = a/b;
  if(a%b==0){
    if(c%2==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
  }
  else{
        cout<<"No"<<endl;
    }
}
return 0;
}