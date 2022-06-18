class Solution {
public:
    int minimizedMaximum(int n, vector<int>& a) {
       
        int start = 1;
        int end = *max_element(a.begin(),a.end());
        int mid = 0,count=0;
        
        while(start <= end)
        {
            mid = start + (end-start)/2;
            
            int ans=0;
            
            for(int i=0; i<a.size(); i++)
            {
                ans += a[i]/mid;
                
                if(a[i]%mid != 0)
                {
                    ans++;
                }
            }
            
            if(ans <= n)
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
