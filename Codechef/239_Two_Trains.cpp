#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  long long int x,b;
  cin>>x;
  long long int sum = 0;

  vector<long long int> v;

  for(int i=0; i<x-1; i++){
    cin>>b;
    sum += b;
    v.push_back(b);
  }
  sum += v[v.size()-1];
  cout<<sum<<endl;
}
return 0;
}