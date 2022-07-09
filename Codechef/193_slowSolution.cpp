#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int sol(){
    int a,b,c,d,e,f;
    cin>>a>>b>>c;
    if((a*b)<=c){
        d=(b*b)*a;
        cout<<d<<endl;
    }
    else{
        if(c%b==0){
            d=c/b;
            e=d*(b*b);
            cout<<e<<endl;
        }
        else{
            d=c/b;
            e=c%b;
            f=(d*(b*b))+(e*e);
            cout<<f<<endl;
        }
    }
}

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  sol();
}
return 0;
}