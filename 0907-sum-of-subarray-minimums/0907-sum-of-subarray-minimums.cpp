class Solution {
public:
    vector<int> pse(vector<int>& arr){
        stack<int> st;
        int n=arr.size();
        vector<int>ans(n,-1);

        for(int i=0; i<arr.size(); i++){
            while(!st.empty() && arr[i]<arr[st.top()] ){
                st.pop();
            }

            if(!st.empty()){
                ans[i]=st.top();
            }

            st.push(i);

        }

        return ans;
    }

    vector<int> nse(vector<int>& arr){
        stack<int> st;
        int n=arr.size();
        vector<int>ans(n,n);

        for(int i=n-1; i>=0; i--){
            while(!st.empty() && arr[i]<=arr[st.top()] ){
                st.pop();
            }

            if(!st.empty()){
                ans[i]=st.top();
            }

            st.push(i);
        }

        return ans;

    }
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> h=pse(arr);
        vector<int> k=nse(arr);
        long long total=0;
        const int mod=1e9 + 7;

        for(int i=0; i<arr.size(); i++){
            long long left=i-h[i];
            long long right=k[i]-i;
            total=(total+arr[i]*left*right*1LL)%mod;
        }
       return total;
    }
};