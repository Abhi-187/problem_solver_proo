class Solution {
public:
    string removeStars(string s) {
 
        stack<char>st;
        string ans="";
        for(auto it:s){
           // find a * ->pop a char
            if(it=='*'){
                while(!st.empty() && st.top()!='*'){
                 st.pop();
                 break;
                }
 
            }
            //not find push it
            else{
             st.push(it);
            }
 
        }
 
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(begin(ans),end(ans));
 
        return ans;
    }
};
