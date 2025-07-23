Solution:-

class Solution {
public:
    double findMaxAverage(vector<int>& a, int k) {
        
        int n = a.size();
        int i=0,j=0;
        double sum=0;
        double maxx=INT_MIN;
        
        while(j<n)
        {
            sum += a[j];
            
            if(j-i+1 < k)
            {
                j++;
            }
            else if(j-i+1 == k)
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
