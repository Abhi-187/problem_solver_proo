class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
    int length = s.size();

    stack<char> st;
    int i, mid = length / 2;
 
    for (i = 0; i < mid; i++) {
        st.push(s[i]);
    }

    if (length % 2 != 0) {
        i++;
    }
   
    char ele;
    while (s[i] != '\0')
    {
         ele = st.top();
         st.pop();
 
    if (ele != s[i])
        return false;
        i++;
    }
 
return true;
}};