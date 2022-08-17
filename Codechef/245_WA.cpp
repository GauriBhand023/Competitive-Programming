#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a = 120;
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  string s;
  cin>>s;
  for(int i=0; i<n; i++){
    if(s[i]=='0'){
        a = min(a,arr[i]);
    }
  }
  cout<<a<<endl;
}
return 0;
}