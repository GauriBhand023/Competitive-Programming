#include <bits/stdc++.h>
using namespace std;


int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool f = false;
    for(int i = 0; i < n - 1; i++){
      if(s[i] == 'L' && s[i + 1] == 'L'){
        f = true;
        break;
      }
      if(s[i] == 'R' && s[i + 1] == 'R'){
        f = true;
        break;
      }
    }
    if(f){
      cout<<"YES\n";
    }else{
      cout<<"NO\n";
    }
  }
  return 0;
}
