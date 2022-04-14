#include <iostream>
using namespace std;
int main()
{
   int t;
   int k, a;
   cin >> t;
   for (int i = 0; i < t; i++)
   {
      cin >> a >> k;
      int arr[a];
      for (int i = 0; i < a; i++)
      {
         cin >> arr[i];
      }
      for (int i = 0; i < a; i++)
      {
         if (arr[i] < k || arr[i] == k)
         {
            cout << "1";
            k = k - arr[i];
         }
         else
         {
            cout << "0";
         }
      }
      cout << endl;
   }
   return 0;
}