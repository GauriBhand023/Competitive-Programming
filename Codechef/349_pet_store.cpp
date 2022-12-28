#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void gauri(){
    int a;
    cin>>a;
    unordered_map<int,int>sg;
    for(int i=0; i<a; i++){
        int g;
        cin>>g;
        sg[g]++;
    }
    int s=0;
    for(auto i: sg){
        if(i.second%2!=0){
            s=1;
            break;
        }
    }
    if(s==0) 
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){

    
  gauri();
}
return 0;
}