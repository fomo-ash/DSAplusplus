class Solution {
public:
    int almost(vector<int> & nums, int k){
        int cnt=0;

        int left=0;
        int ans=0;

        for(int right=0; right<nums.size(); right++){
            if(nums[right]%2!=0){
                cnt++;
            }
            while(cnt>k){
                if(nums[left]%2!=0){
                cnt--;
                }

                left++;
            }
            ans+=right-left+1;
        }
        return ans;

    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return almost(nums,k)-almost(nums,k-1);
    }
};