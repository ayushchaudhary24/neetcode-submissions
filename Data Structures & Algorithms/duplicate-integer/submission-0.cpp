class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = INT_MAX;
        for(int i=0; i<n;i++){
            int n1 = nums[i];
            if(ans==n1) return true;
            ans = n1;
        }
        return false;
    }
};