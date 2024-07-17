#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> remainderCount;
        remainderCount[0] = 1; // Initialize with 0 to handle subarrays that sum to multiples of k
        int sum = 0, count = 0;

        for (int num : nums) {
            sum += num;
            int remainder = ((sum % k) + k) % k; // Normalize remainder to be positive

            if (remainderCount.find(remainder) != remainderCount.end()) {
                count += remainderCount[remainder];
            }
            remainderCount[remainder]++;
        }

        return count;
    }
};
