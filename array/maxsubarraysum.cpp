//better

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int most= INT_MIN;
        for(int i=0; i<nums.size(); i++){
            int sum=0;
            for(int j=i; j<nums.size(); j++){
                sum+=nums[j];
                most=max(sum, most);
            }
        }

        return most;
    }
};

//kadane

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int most= INT_MIN;
        int sum=0;
        for(int i=0; i<nums.size(); i++){

            sum+=nums[i];
            if(sum>most){
                most=sum;
            }
           if(sum<0){
            sum=0;
           }

        }

        return most;
    }
};