#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;
  cin>>n;
  string s;
  cin>>s;
  stack<char>st;
  int flag =0;
  for(int i=0; i<n; i++){
    if(!st.empty()){
        if(s[i]=='1' && st.top()=='1'){
            flag =1; 
            break;
        }
        else if(s[i]=='0' && st.top()=='0')
            st.pop();
        else
            st.push(s[i]);
    }
    else 
    st.push(s[i]);
  }
  if(flag)
   cout<<1<<endl;
   else 
   cout<<2<<endl;
}
return 0;
}