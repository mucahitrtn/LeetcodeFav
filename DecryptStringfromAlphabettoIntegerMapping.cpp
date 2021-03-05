class Solution {
public:
    string freqAlphabets(string s) {
        int size=s.size();
        int i=0;
        string ans="",temp="";
        for(;i<size-2;){
            temp="";
            if(s[i+2]=='#'){
                temp+=s[i];
                i++;
                temp+=s[i];
                i++;
                ans+=stoi(temp)-1+'a';
            }
            else ans+='a'+(s[i]-'1');
            i++;
        }
        while(i<size)ans+='a'+(s[i++]-'1');
        return ans;
    }
};
