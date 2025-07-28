class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0;
        int i = 0;
        
        while (i <= maxReach && i < nums.size()) {
            maxReach = max(maxReach, i + nums[i]);
            i++;
        }
        
        return maxReach >= nums.size() - 1;
    }
};
