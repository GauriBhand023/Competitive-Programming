#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int t;cin>>t;
while(t--){
        int n;
        cin>>n;
        int ans=0;
        while(n) {
            ans=ans*10+n%10;
            n/=10;
        }
        cout<<ans<<endl;
}
return 0;
}
