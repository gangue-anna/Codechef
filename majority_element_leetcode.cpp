class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = nums.size() / 2;
        map<int, int> countMap;

        for (int i = 0; i < nums.size(); i++) {
            countMap[nums[i]] += 1;
        }

        for (const auto& pair : countMap) {
            if (pair.second > maj) {
                return pair.first;
            }
        }

        return -1;
    }
};

class Solution2 {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};

