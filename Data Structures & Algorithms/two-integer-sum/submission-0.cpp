class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> s;

        for (int i = 0; i < nums.size(); i++) {
            int value = target - nums[i];

            if (s.count(value)) {
                return {s[value], i};
            }
            s[nums[i]] = i;
        }
        return {};
    }
};
