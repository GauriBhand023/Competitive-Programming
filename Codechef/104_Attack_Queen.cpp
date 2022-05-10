#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


int t;
cin>>t;
while(t--){
  int n,x,y,a,b,c,d,e;
  cin>>n>>x>>y;

  a = n-x+x-1+n-y+y-1;
  
  b = min(x-1,y-1);

  c= min(x-1,n-y);

  d = min(n-x, y-1);

  e = min(n-x, n-y);

  int total = a+b+c+d+e;
  cout<<total<<endl;
}
return 0;
}