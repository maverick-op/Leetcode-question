// You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

// Return the single element that appears only once.

// Your solution must run in O(log n) time and O(1) space.


solution:-

class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        
        if(a.size() == 1)
        {
            return a[0];
        }
        
        int start = 0;
        int end = a.size()-1;
        
        int mid = 0;
        int ans = 0;
        
        while(start < end)
        {
            
            mid = start + (end-start)/2;
            
            if(mid%2==0)
            {
                ans = mid+1;
            }
            else
            {
                ans = mid-1;
            }
            
            if(a[mid] == a[ans])
            {
                start = mid+1;
            }
            else
            {
                end = mid;
            }
            
        }
        
        return a[start];
        
    }
};
