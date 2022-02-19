#include <iostream>
using namespace std;
int main() {
    int t;
    double a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b;
        c = a*b;
        if(a>1000){
            d=c/10;
            c-=d;
              printf("%f\n",c);
        }
        else{
              printf("%f\n",c);
        }
    }
    return 0;
}