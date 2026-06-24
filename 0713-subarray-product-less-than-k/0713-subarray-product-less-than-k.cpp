class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int cnt=0;
        int left=0;
        long long prod=1;

        //window left to right
        for(int right=0; right<nums.size(); right++){
            prod=prod*nums[right];

            //window shrink
            while(prod>=k){
                prod/=(long long)nums[left];
                left++;
            }

            cnt += right-left+1;
        }
        return cnt;

    }
};