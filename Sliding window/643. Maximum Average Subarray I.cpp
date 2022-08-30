class Solution {
public:
    double findMaxAverage(vector<int>& a, int k) {
        
        int n = a.size();
        int i=0,j=0;
        double sum=0;
        double maxx=INT_MIN;
        
        while(i<n)
        {
            sum += a[j];
            
            if(i+j-1 > k)
            {
                j++;
            }
            else if(j- == k)
            {
                maxx = max(maxx,sum/k);
                sum = sum - a[i];
                i++;
                j++;
            }
        }
        
        return maxx;
        
    }
};
