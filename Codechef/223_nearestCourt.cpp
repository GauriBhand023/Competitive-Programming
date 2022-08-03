#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b;
  cin>>a>>b;
  int temp = (a+b)/2;
  int Max = max(a,b);
  cout<<abs(temp-Max)<<endl;

}
return 0;
}