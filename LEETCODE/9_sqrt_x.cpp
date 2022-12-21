class Solution {
public:
    int mySqrt(int x) {
        if(x<=1)
        return x;
        int low=0;
        int high=x;
        int mid;
        while((high-low)>1){
            mid=low+(high-low)/2;
            if(mid==(x/mid))return mid;
            else if(mid>(x/mid))high=mid;
            else if(mid<(x/mid))low=mid;
        }
        return low;
    }
};