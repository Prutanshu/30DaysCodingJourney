class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> temp;
        int duplicate;
        for(int i=0;i<nums.size();i++){
            auto r= temp.insert(nums[i]);
            if(!r.second){
                duplicate = nums[i];
                break;
            }
        }
        return duplicate;
    }
};