class Solution {
public:
    int mySqrt(int x) {
        
        long long start = 0;
        long long end = x;
        long long mid = 0;
        
        long long ans=0;
        
        while(start <= end)
        {
            mid = start + (end-start)/2;
            
            if(mid*mid == x)
            {
                return mid;
            }
            else if(mid*mid > x)
            {
                end = mid-1;
            }
            else
            {
                start = mid+1;
                ans = mid;
            }
        }
        
        return ans;
        
    }
};
