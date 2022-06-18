class Solution {
public:
    int minEatingSpeed(vector<int>& a, int h) {
        
        long long int start = 1;
        long long int end = *max_element(a.begin(),a.end());
        long long int mid = 0,count=0;
        
        while(start <= end)
        {
            mid = start + (end-start)/2;
            
           long long int ans=0;
            
            for(long long int i=0; i<a.size(); i++)
            {
                ans += a[i]/mid;
                
                if(a[i]%mid != 0)
                {
                    ans++;
                }
            }
            
            if(ans <= h)
            {
                // count = mid;
                end = mid-1;
            }
            else
            {
                start = mid+1;
            }
        }
        
        return start;
        
    }
};
