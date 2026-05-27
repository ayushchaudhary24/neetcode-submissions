class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> us;
        int n=nums.size();
        sort(nums.begin(), nums.end());
        if(n==0) return 0;
        int prev = 0;
        int count = 1;
        int max_count=0;
        for(int i=0; i<n;i++){
            if(i==0){
                prev = nums[i];
                continue;
            }
            else{
                if(nums[i]-prev==1){
                    count++;
                    prev = nums[i];
                   
                }else if(nums[i]-prev ==0) continue;
                else{
                     max_count = max(max_count,count);
                     count = 1;
                     prev = nums[i];
                }
            }
        }
        return max(count,max_count);

    }
};
