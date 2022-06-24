#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int AC(int a){
    cin>>a;
    int ans=a/100;
    int r = a%100;
    if(( ans + r)<=10){
        cout<<ans+r<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
}

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
    int x;
    AC(x); 
}
return 0;
}