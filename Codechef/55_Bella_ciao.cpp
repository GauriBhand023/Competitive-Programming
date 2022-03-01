#include <bits/stdc++.h>
using namespace std;
# define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--){
        int A,a,P,Q;
        cin>>A>>a>>P>>Q;
        ll k=(A/a),l=A%a;
        cout<<(a*((k*P)+(((k-1)*k*Q))/2))+((P+(k*Q))*l)<<endl;
    }
}
