class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,-1);
        stack<int>st;

        for(int i=2*n-1; i>=0; i--){
        while(!st.empty() && st.top()<=nums[i%n]){
            st.pop();
        }

        if(i<n){
            if(!st.empty()){
                ans[i]=st.top();
            }
        }

        st.push(nums[i%n]);
        }

        return ans;
    }
};

//Remove everything <= x because those elements can never be the next greater for x or any earlier element.
//The first remaining larger element on top is the answer.
//Push x so it can help elements to its left.