//better

class Solution {
public:
    void sortColors(vector<int>& nums) {
      
      int cnt1=0, cnt2=0, cnt3=0;

   

      for(int i=0; i<nums.size();i++){
        if(nums[i]==0){
            cnt1++;
        }
        if(nums[i]==1){
            cnt2++;
        }
        if(nums[i]==2){
            cnt3++;
        }
      }
      int j=0;

      for(int i=0; i<cnt1; i++){
        nums[j]=0;
        j++;
      }

       for(int i=0; i<cnt2; i++){
        nums[j]=1;
        j++;
      }

       for(int i=0; i<cnt3; i++){
        nums[j]=2;
        j
      }

    }
};