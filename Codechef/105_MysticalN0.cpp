#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;
while(t--)
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
      cout<<arr[i];
  }
  int dp[n+1][33];
  for(int i=1; i<=n; i++){
      int temp;
      temp = arr[i-1];
      for(int j=0; j<33; j++){
          dp[i][j]=dp[i-1][j];
      }
      int pw = 32;
      if(temp!=0){
          pw = (int)(log(temp)/log(2));
          dp[i][pw]++;
      }
      int q;
      cin>>q;
      for(int i=0; i<q; i++){
          int a,b,c;
          cin>>a>>b>>c;
          int d = 0;
          int e = 32;
          if(c!=0){
              pw=(int)(log(c)/log(2));
          }
          d = dp[b][pw]-dp[a-1][pw];
          int ans = (b-a+1)-d;
          cout<<ans;
      }
  }
}
return 0;
}