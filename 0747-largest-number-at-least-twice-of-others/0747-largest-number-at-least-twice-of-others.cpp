class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int larI = 0;
        int secLarI = 1;
        
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>nums[larI]){
                secLarI = larI;
                larI = i;
            }else if(nums[i]==nums[larI]){
                
            }
            else if(nums[i]>nums[secLarI]){
                secLarI = i;
                
            }
        }
        
        if(nums[larI]>=2*nums[secLarI]) return larI;
        return -1;
    }
};