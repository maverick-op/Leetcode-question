class Solution {
public:
    int searchInsert(vector<int>& a, int k) {
        
        int n = a.size();
        
        int start=0;
        int end = n-1;
        int mid = 0;
        
        while(start <= end)
        {
            mid = start + (end-start)/2;
            
            if(a[mid] == k)
            {
                return mid;
            }
            else if(a[mid] > k)
            {
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
