class Solution {
public:
    bool isValid(string s) {
        //LIFO
        stack<char>st;
        int i=0;
        while(i<s.length()){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            st.push(s[i]);
            i++;
        }
        if(s[i]==')'){
            if(!st.empty() && st.top()=='(' ){
                st.pop();
                i++;
                continue;
            }
            else{
                return false;
            }
        }

        if(s[i]=='}'){
            if( !st.empty() &&  st.top()=='{'){
                st.pop();
                i++;
                continue;
            }
            else{
                return false;
            }
        }
        if(s[i]==']'){
            if(!st.empty() && st.top()=='['){
                st.pop();
                i++;
                continue;
            }
            else{
                return false;
            }
        }
        
        }
        return st.empty();
    }
};