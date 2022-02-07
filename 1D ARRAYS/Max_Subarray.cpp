#include <iostream>
using namespace std;
int maxSubProduct(int arr[], int n){
    int maxProduct=INT_MIN;
    for(int i=0; i<n; i++){
        int product=1;
        for(int j=i; j<n; j++ ){
            product=product*arr[j];
        }
        maxProduct=max(maxProduct, product);
    }
    return maxProduct;
}
int main()
{   
     
return 0;
}