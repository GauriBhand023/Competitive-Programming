#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b;
  cin>>a>>b;
  if(b<a){
    cout<<-1<<endl;
    continue;
  }
  cout<<b-a+1<<" ";
  for(int i=1; i<=a; i++){
    if(i!=b-a+1){
        cout<<i<<" ";
    }
  }
    cout<<endl; 
}
return 0;
}