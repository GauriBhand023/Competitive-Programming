#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool sortbysec(const pair<int,int> &a,
               const pair <int,int> &b){
                return (a.second<b.second);
               }
void solve(){
    vector<pair<int,int>>v;
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    vector<int> b(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    for(int i=0; i<n; i++){
        v.push_back(make_pair(a[i],b[i]));
    }
    map<int,int>m;
    sort(v.begin(),v.end(),sortbysec);
    ll sum =0;
    for(int i=0 ; i<n; i++){
        if(m[v[i].first]<=0){
            sum+=v[i].second;
            m[v[i].first]++;
            k--;
        }
        if(k==0)
         break;
    }
    if(k==0)
     cout<<sum;
     else
       cout<<-1;
    cout<<endl;
}

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  solve();
}
return 0;
}