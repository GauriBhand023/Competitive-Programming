#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n,a,b;cin>>n>>a>>b;
  int arr1[n];
  int arr2[n];
  for(int i = 0;i<n;i++){
      cin>>arr1[i];
  }
  for(int i = 0;i<n;i++){
      cin>>arr2[i];
  }
  int arr3[n];
  bool flag = true;
  for(int i = 0;i<n;i++){
      arr3[i]=abs(arr1[i]-arr2[i]);
      if(arr3[i]!=a && arr3[i]!=b){
          cout<<"NO"<<endl;
          flag = false;
          break;
      }
  }
  if(flag) cout<<"YES"<<endl;

}
return 0;
}
