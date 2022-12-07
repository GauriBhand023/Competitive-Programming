#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b;
  cin>>a>>b;
  float d = (float)a;
  float e = (float)b;
  if((a+b)/2==(d+e)/2)
  cout<<(a+b)/2<<endl;
  else{
    cout<<-1<<endl;
  }
}
return 0;
}