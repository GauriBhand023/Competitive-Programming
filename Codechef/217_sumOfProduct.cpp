#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;
  cin>>n;
  int arr[n];
  int out = 0;
  int c =0;
  for(int i=0 ;i<n; i++){
    cin>>arr[i];
    if(arr[i]==1){
        c+=1;
    }
    else{
        out+=c*(c+1)/2;
        c=0;
    }
    out+=c*(c+1)/2;
  }
   cout<<out<<endl;  
}
return 0;
}