#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void sol(){
    int a;
  cin>>a;
  if(a==3){
    cout<<1<<" "<<2<<" "<<3<<endl;
    return;
  }
  cout<<a<<" "<<a-2<<" "<< endl;
  for(int i=1; i<a-3; i++){
    cout<<i<<" ";
  }
  cout<<a-3<<" "<<a-1<<endl;
}

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
    sol();
  
}
return 0;
}