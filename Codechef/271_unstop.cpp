#include <iostream>
#include <algorithm>
using namespace std;
 
int findMin(int arr[], int n)
{
    int max_range = 0;
    int min, max;
    for (int i = 0; i < n && n - i > max_range; i++)
    { 
        min = max = arr[i];
        for (int j = i; j < n; j++)
        {
            min = std::min(min, arr[j]);
            max = std::max(max, arr[j]);
 
            if (2 * min <= max) {
                break;
            }
            max_range = std::max(max_range, j - i + 2);
        }
    }
    return n - max_range;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int a = arr[n-1] - arr[0];
    cout << findMin(arr, n);
    return 0;
}