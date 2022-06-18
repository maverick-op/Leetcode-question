class Solution {
public:
    int maximumCandies(vector<int>& a, long long k) {
       
        long long int start = 0;
        long long int end = *max_element(a.begin(),a.end());
        long long int mid = 0,res=0;
        
        while(start < end)
        {
            mid = (start+end+1)/2;  // for last elemet valid
            
            long long int ans=0;
            
            for(long long int i=0; i<a.size(); i++)
            {
                ans += a[i]/mid;
            }
            
            if(ans >= k)
            {
                start = mid;
            }
            else
            {
                end = mid-1;
            }
        }
        
        return start;
    }
};
