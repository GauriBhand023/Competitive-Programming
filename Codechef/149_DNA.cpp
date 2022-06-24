#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string a;
    cin >> a;
    for(int i=0; i<n; i++){
      if(a[i]=='A'){
        cout<<'T';
      }
      else if(a[i]=='T'){
        cout<<'A';
      }
      else if(a[i]=='C'){
        cout<<'G';
      }
      else if(a[i]=='G'){
        cout<<'C';
      }
    }
    cout<<endl;
    
  }
  return 0;
}