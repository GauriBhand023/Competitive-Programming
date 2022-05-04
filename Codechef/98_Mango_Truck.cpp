#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;
cin>>t;
while(t--){
     int a;
     cin>>a;

     int b;
     cin>>b;

     int c;
     cin>>c;

     if(((c-b)/a)<=c){
         cout<<((c-b)/a);
     }
}
return 0;
}