#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;
cin>>t;
while(t--){
  int n;
  cin>>n;
  int arr[n],m=0;
  map<int, int> map;
  for(int i=0; i<n; i++){
      cin>>arr[i];
      m = max(m, arr[i]);
      map[arr[i]]++;
  }
  for(int i =0; i<n; i++){
      m = max(m,arr[i]+map[arr[i]]-1);
  }
  cout<<m<<endl;
}
return 0;
}