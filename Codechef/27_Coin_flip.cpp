#include <iostream>
using namespace std;

int main() {
int t;
    cin>>t;
    while(t--)
    {
      int g;
      cin>>g;
      while(g--)
      {
         int a,b,c;
         cin>>a>>b>>c;
         if(b%2)
         {
            if(a==c)
            cout<<b/2<<endl;
         else
            cout<<b/2+1<<endl;
         }
         else
         {
            if(a==c)
               cout<<b/2<<endl;
            else
               cout<<b/2<<endl;
         }
         
      }
    }
  
	return 0;
}
