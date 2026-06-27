class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
       int n=nums.size();
       int total_sum=accumulate(nums.begin(), nums.end(), 0);
       int total_count=0;

       for(auto num: nums) total_count++;

       if(total_count-k==0) return total_sum;

       int window_sum=0;
       int window_size=n-k;

       for(int i=0; i<window_size; i++){
        window_sum+=nums[i];
       }

       int min_sum=window_sum;
       for(int i=window_size; i<n; i++){
        window_sum+=nums[i];
        window_sum-=nums[i-window_size];
        min_sum=min(min_sum, window_sum);
       }

        return total_sum - min_sum;
    }
};