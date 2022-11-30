#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  long long int g,s;
  cin>>g>>s;
  long long int sum = (g*(g-1))/2;
  if(s<g/2){
    long long y = g-2*s;
    sum  -= (y*(y-1))/2;
  }
  cout<<sum<<endl;
}
return 0;
}