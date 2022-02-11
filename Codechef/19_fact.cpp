#include <bits/stdc++.h>
using namespace std;

int main() {
 int t, a, b;
 cin>>t;
 while(t--) {
  cin>>a;
  b=0;
  for (int i=1; pow(5, i)<=a; i++) {
   b=b+a/pow(5, i);
  }
  cout<<b<<endl;
 }
 return 0;
}