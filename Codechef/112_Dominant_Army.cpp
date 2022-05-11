#include <iostream>
using namespace std;
int main()
{
    int d;
    cin>>d;
    while (d--)
    {
        /* code */
   
    
     int x,y,z;//f
     cin>>x>>y>>z;
     

     if(x>y+z || y>x+z || z>x+y){
         cout<<"YES"<<endl;
     }
     else{
         cout<<"NO"<<endl;
     }

      }
     
return 0;
}