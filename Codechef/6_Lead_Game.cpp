#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    int c=0, d=0, m=0, p=0;
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        c+=a, d+=b;
        if(c>d){
            if((c-d)>m){
                m=c-d;
                p=1;
            }
        }
            else{
                if(d-c>m){
                    m=d-c;
                    p=2;
                }
            }    
    }
    cout<<p<<" "<<m<<endl;

    return 0;
}