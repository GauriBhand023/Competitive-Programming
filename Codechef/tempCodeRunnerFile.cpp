#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
    int n;
  int arr[n];
  int max = arr[0];
  for(int i=0; i<n; i++){
    cin>>arr[i];
    if(arr[i]>max){
        max = arr[i];
    }
    cout<<max<<endl;
  }
}
return 0;
}