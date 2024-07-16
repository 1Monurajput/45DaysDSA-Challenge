class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>ans;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                ans.push_back(nums[i]);
            }
        }
        ans.push_back(nums[nums.size()-1]);
        nums=ans;
        return ans.size();
    }
};