/*Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
Example 4:

Input: s = "([)]"
Output: false
Example 5:

Input: s = "{[]}"
Output: true
*/

class Solution {
public:
    bool isValid(string s) {
      
        
        vector<char> vec;
        
        for(int i=0; i<s.size(); i++){
            
            if(s[i]=='('){
                vec.push_back(')');
            }
            else if(s[i]=='{'){
                vec.push_back('}');
            }
            else if(s[i]=='['){
                vec.push_back(']');
            }
            else{
                if(vec.empty()|| s[i]!=vec[vec.size()-1])
                    return false;
                
                vec.pop_back();
            }
            
        }
        
        
        return vec.empty();
    }
};
