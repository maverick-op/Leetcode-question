class Solution {
public:
    int search(vector<int>& a, int k) {
        
        int start = 0;
        int end = a.size()-1;
        int mid = 0;
        
        while(start <= end)
        {
            mid = start + (end-start)/2;
            
            if(a[mid] == k)
            {
                return mid;
            }
            
            if(a[mid] > a[end])
            {
                if(k < a[mid] && k>=a[start])
                {
                    end = mid-1;
                }
                else
                {
                    start = mid+1;
                }
            }
            else if(a[mid] < a[start])
            {
                if(k>a[mid] && k<=a[end])
                {
                    start = mid+1;
                }
                else
                {
                    end = mid-1;
                }
            }
            else
            {
                if(a[mid] > k)
                {
                    end = mid-1;
                }
                else
                {
                    start = mid+1;
                }
            }
        }
        
        return -1;
    }
};
