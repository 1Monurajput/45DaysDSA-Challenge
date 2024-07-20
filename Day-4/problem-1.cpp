#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;  // Skip duplicate `i`

            for (int j = i + 1; j < nums.size(); j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;  // Skip duplicate `j`

                int k = j + 1;
                int l = nums.size() - 1;

                while (k < l) {
                    long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[k] + nums[l];

                    if (sum < target) {
                        k++;
                    } else if (sum > target) {
                        l--;
                    } else {
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;

                        // Skip duplicates for `k`
                        while (k < l && nums[k] == nums[k - 1]) k++;

                        // Skip duplicates for `l`
                        while (k < l && nums[l] == nums[l + 1]) l--;
                    }
                }
            }
        }

        return ans;
    }
};
