class Solution {
public:
    vector<int> nge(vector<int>& nums){
        stack<int> st;
        int n=nums.size();
        vector<int> ans(n,n);

        for(int i=n-1; i>=0; i--){
            while(!st.empty() && nums[st.top()]<=nums[i]){
                st.pop();
            }

            if(!st.empty()){
                ans[i]=st.top();
            }

            st.push(i);

        }
        return ans;
    }

    vector<int> pge(vector<int>& nums){
        stack<int> st;
        int n=nums.size();
        vector<int> ans(n,-1);

        for(int i=0; i<n; i++){
            while(!st.empty() && nums[st.top()]<nums[i]){
                st.pop();
            }

            if(!st.empty()){
                ans[i]=st.top();
            }

            st.push(i);

        }
        return ans;
    }

     vector<int> nse(vector<int>& nums){
        stack<int> st;
        int n=nums.size();
        vector<int> ans(n,n);

        for(int i=n-1; i>=0; i--){
            while(!st.empty() && nums[st.top()]>=nums[i]){
                st.pop();
            }

            if(!st.empty()){
                ans[i]=st.top();
            }

            st.push(i);

        }
        return ans;
    }

     vector<int> pse(vector<int>& nums){
        stack<int> st;
        int n=nums.size();
        vector<int> ans(n,-1);

        for(int i=0; i<n; i++){
            while(!st.empty() && nums[st.top()]>nums[i]){
                st.pop();
            }

            if(!st.empty()){
                ans[i]=st.top();
            }

            st.push(i);

        }
        return ans;
    }
    long long subArrayRanges(vector<int>& nums) {
        vector<int> h= nge(nums);
        vector<int> k= pge(nums);
        vector<int> l= pse(nums);
        vector<int> r= nse(nums);

        long long max_total=0;
        long long min_total=0;

        int l1=0, l2=0;
        int r1=0, r2=0;

        for(int i=0 ;i <nums.size(); i++){
            l1=h[i]-i;
            r1=i-k[i];
            l2=i-l[i];
            r2=r[i]-i;

            min_total=(min_total+(1LL*nums[i]*l2*r2));
            max_total=(max_total+(1LL*nums[i]*l1*r1));
        }

        return max_total-min_total;
    }
};