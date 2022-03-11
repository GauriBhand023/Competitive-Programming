#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the rows for hollow pyramid" << endl;
    cin>>rows;
    for(int i=1; i<=rows; i++){
        for(int j=i; j<=rows; j++){ 
        cout<<" ";
    }
    for(int k=1; k<2*i; k++){
            if(i==rows || (k==1 || k==2*i-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
    }
    cout<<endl;
    }
    getch();
    return 0;
}