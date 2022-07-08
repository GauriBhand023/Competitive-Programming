#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b,c;
  cin>>a>>b>>c;
  int sum = a+b+c;
  if(sum>=100 && (a>=10 && b>=10 && c>=10)){
    cout<<"Pass"<<endl;
  }
  else{
    cout<<"Fail"<<endl;
  }
}
return 0;
}