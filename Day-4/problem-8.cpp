class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int candidate = nums[0];
        for(int i =1;i<nums.size();i++){
            if(candidate==nums[i]){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                candidate = nums[i];
                count++;
            }
        }
        return candidate;
    }
};