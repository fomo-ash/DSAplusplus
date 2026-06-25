class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int cnt=0;  
        int sum=0;
        int left=0;
        int ans=INT_MAX;

        if(accumulate(nums.begin(),nums.end(),0LL)<target) return 0;

        for(int right=0; right<nums.size(); right++){
            sum+=nums[right];

            while(sum>=target){
                ans=min(ans,right-left+1);
                sum-=nums[left];
                left++;
            }

        }
        return ans;
    }
};