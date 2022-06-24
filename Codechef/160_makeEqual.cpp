#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int equal(int n){
  cin>>n;
  int arr[n];
  map<int, int>s;
  for(int i=0; i<n; i++){
    cin>>arr[i];
    s[arr[i]]++;
  }
  int ans = INT_MIN;
  for(auto pa : s){
    ans = max(ans, pa.second);
  }
  cout<<n-ans<<endl;;
}

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
    int a;
    equal(a);
}
return 0;
}