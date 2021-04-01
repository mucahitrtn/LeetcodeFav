
// Kadane's Algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int mx=nums[0], sum=nums[0];
       
        for(int i=1; i<nums.size(); i++){
            
            sum= max(nums[i], sum+ nums[i]);
            
            if(sum> mx)
                mx= sum;
            
        } 
     
        return mx;
    }
};
