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
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  
  sort(arr, arr + n);
  int result =0;
    for (int i = 0; i < n; i++) {
        if(arr[i]!=i+1 && arr[i]<i+1){
            result = result+(i+1-arr[i]);
        }
        else if(arr[i]>i+1){
            result =-1;
            break;
        }
    }
    cout<<result<<endl;
}
return 0;
}