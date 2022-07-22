#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b,c,d,n;
  cin>>a>>b;
  if(a%b==0){
    cout<<-1<<endl;
  }
  else{
    c=ceil(n/a);
    d=b/__gcd(a,b);
    if(c%d==0){
        c+=1;   
    }
    cout<<c*a<<endl;
  }


}
return 0;
}