#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

long long sum(long long n, long long d){
    n /= d;
    return (n) * (1 + n) * d / 2;
}

long long sumMultiples(long long n)
{
    return sum(n, 2) + sum(n, 7);
}

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
    long long n;
    cin>>n;
    cout << sumMultiples(n); 
}
return 0;
}