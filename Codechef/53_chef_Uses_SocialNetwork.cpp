#include <bits/stdc++.h>
using namespace std;
struct post{
    bool is_special;
    int popularity;
    string content;
};
bool compare (post a, post b){
    if (a.is_special != b.is_special){
        return a.is_special>b.is_special;
    }
    else{
        return a.popularity>b.popularity;
    }
}
int main(){
    int a,b;
    cin >> a >> b;
    vector<int> special(a);
    for (int i=0;i<=a-1;i++) {
        cin >> special[i];
    }
    sort(special.begin(), special.end());
    vector<post> arr(b);
    for (int i=0;i<=b-1;i++){
        int f;
        cin >> f;
        if (binary_search(special.begin(), special.end(), f)){
            arr[i].is_special=true;
        }
        else {
            arr[i].is_special=false;
        }
        cin >> arr[i].popularity >> arr[i].content;
    }
    sort(arr.begin(), arr.end(), compare);
    for (int i=0;i<=b-1;i++){
        cout << arr[i].content << endl;
    }
    return 0;
}