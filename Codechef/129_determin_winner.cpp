#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int x = max(a,b);
  int y = max(c,d);
  if(x==y){
      cout<<"TIE"<<endl;
  }
  else if(x>y){
      cout<<"Q"<<endl;
  }
  else if(x<y){
      cout<<"P"<<endl;
  }
}
return 0;
}