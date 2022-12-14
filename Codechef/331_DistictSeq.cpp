#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n,a,sum,t;
  cin>>n;
  sum=t=0;
  a=n;
  int arr[n];
  for(int i=0; i<n; i++)
  cin>>arr[i];
  sort(arr,arr+n);
  for(int i=n-1; i>=0; i--){
    if(arr[i]>t){
        t =1;
        break;
    }
    else{
        sum+=a-arr[i];
        a--;
    }
  }
  if(t)
  cout<<-1<<endl;
  else
  cout<<sum<<endl;
}
return 0;
}