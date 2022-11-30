#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b,height,count=0;
  cin>>a>>b;
  for(int i=0; i<a; i++){
    cin>>height;
    if(height>b)
    count++;
  }
  cout<<count<<endl;
}
return 0;
}