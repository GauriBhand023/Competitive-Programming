#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        double basic_salary;
        cin>>basic_salary;
        double HRA=0,DA=0,gross_salary=0;
        if(basic_salary<1500){
            HRA=basic_salary*0.1;
            DA=basic_salary*0.9;
        }
        else {
            HRA=500;
            DA=basic_salary*0.98;
        }
        gross_salary = basic_salary+HRA+DA;
        cout<<fixed<<setprecision(2)<<gross_salary<<endl;
    }
    return 0;
}