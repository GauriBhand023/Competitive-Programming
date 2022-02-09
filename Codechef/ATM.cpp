#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int x;
float y;
cin>>x>>y;
if((x%5==0 && x+0.50<=y)){
   cout <<fixed<< y-x-0.5 << endl; 
}
else
    {
        cout <<fixed<< y << endl;
    }
return 0;
}