class Solution {
public:
int countFreq(vector<int> arr, int n)
{
    int ans=0;
    unordered_map<int, int> mp;
 
  
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
 
    for (int i = 0; i < n; i++) {
      if (mp[arr[i]] != -1 && mp[arr[i]]==1)
      {
          
          return -1;
      }
      else if (mp[arr[i]] != -1 && mp[arr[i]]%3==0)
      {
          
          ans+=(mp[arr[i]])/3;
          mp[arr[i]] = -1;
      }
      else if (mp[arr[i]] != -1)
      {
          
          ans+=(mp[arr[i]])/3 +1;
          mp[arr[i]] = -1;
      }
    }
    return ans;
}
    int minimumRounds(vector<int>& tasks) {
        int n=tasks.size();
        return countFreq(tasks,n);
    }
};