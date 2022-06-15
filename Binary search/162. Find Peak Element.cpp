class Solution {
public:
    int findPeakElement(vector<int>& a) {
        
        int start=0;
        int end = a.size()-1;
        int mid=0;
        
        while(start<end)
        {
            mid = start + (end-start)/2;
            
            if(a[mid] < a[mid+1])
            {
                start = mid+1;
            }
            else
            {
                end = mid;
            }
        }
        return start;
    }
};
