// Aprroach :-
// sort the array and then check the adjacent element is same or not then 
// increase the count by the differnce of size and the current index

class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        int count = 0;
        
        for(int i=n-1; i>0; i--)
        {
            if(nums[i-1] != nums[i])
            {
                count += n - i;
            }
        }
        
        return count;
        
    }
};
