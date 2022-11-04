class Solution {
public:
    int sum = 0;
    vector<int> runningSum(vector<int>& nums) {
        for(int i = 0; i<nums.size();i++){
           
            sum += nums[i];
            nums[i] = sum;
        }
        return nums;
        
    }
};