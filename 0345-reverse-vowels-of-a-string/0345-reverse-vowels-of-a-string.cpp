class Solution {
public:
    bool check(char a){
        return (a == 'a' || a=='A' || a == 'e' || a=='E' || a == 'i' || a=='I' || a == 'o' || a=='O' || a == 'u' || a=='U' );
    }
    string reverseVowels(string s) {
        vector<char> ans;
        
        for(int i=0;i<s.size();i++){
            if(check(s[i])){
                ans.push_back(s[i]);
            }
            
        }
        for (int i =0;i<s.size();i++){
            if(check(s[i])){
                s[i]=ans.back();
                ans.pop_back();
            }
        }
        return s;
        
    }
};