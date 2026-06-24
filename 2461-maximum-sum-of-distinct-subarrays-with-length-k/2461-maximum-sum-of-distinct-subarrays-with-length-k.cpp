class Solution {
public:
    
    long long maximumSubarraySum(vector<int>& nums, int k) {

        unordered_map<int,int>freq;
       
        long long window_sum=0;
        long long ans=0;

        for(int i=0; i<nums.size(); i++){
            window_sum+=nums[i];
            freq[nums[i]]++;

            //removin the extra element
            if(i>=k){
                window_sum-=nums[i-k];
                freq[nums[i-k]]--;

                if(freq[nums[i-k]]==0)freq.erase(nums[i-k]);
            }

            //checking size 
            
            if(freq.size()==k){
                ans=max(ans,window_sum);
            }
        }
        
        return ans;
        

    }
};