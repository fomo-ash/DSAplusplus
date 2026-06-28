class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        long long sum=0;

        for(int right=n-1; right>=n-k; right--){
            if(mul>0){
                sum+=(long long)nums[right]*mul;
                mul--;
            }
            else{
                sum+=nums[right];
            }
        }
        return sum;
    }
};