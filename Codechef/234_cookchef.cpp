#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int s;
  cin>>s;
  vector<int>v(s);
  int a=0;

  for(int i=s-1; i>=0; i--){
    cin>>v[i];
    if(v[i]%2==1)
    a^=i;
  }

  if(a==0){
    cout<<"Cook"<<endl;
  }
  else{
    cout<<"Chef"<<endl;
  }

}
return 0;
}