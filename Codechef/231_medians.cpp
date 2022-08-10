#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,a[1001],l,r;

void sol(){
    int n;
    cin>>n;
    a[1]=0;
    l=0;
    r=0;
    for(int i=2; i<=n; ++i){
        if(i%2==0){
        a[i]=--l;
        }
        else{
            a[i]=++r;
        }
    }
    for(int i=1; i<=n; ++i)
    cout<<a[i]-l+1<<" ";
    cout<<endl;

}

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
    sol();
  
}
return 0;
}