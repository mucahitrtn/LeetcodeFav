class Solution {
public:
    int romanToInt(string s) {
    
        int sum=0;
        
        for(int i=0; i<s.size(); i++){
            
            if(s[i]=='I'){
                if(i!=s.size()-1 && s[i+1]=='V'||s[i+1]=='X'||s[i+1]=='L'||s[i+1]=='C'||s[i+1]=='D'||s[i+1]=='M'){
                    continue;
                }
                else
                    sum+=1;
            }
            
            if(s[i]=='V'){
                 if(i!=s.size()-1 && s[i+1]=='X'||s[i+1]=='L'||s[i+1]=='C'||s[i+1]=='D'||s[i+1]=='M'){
                    continue;
                }
                
                if(i!=0 && s[i-1]=='I'){
                    sum+=4;
                }
                else{
                    sum+=5;
                }
                
            }
            else if(s[i]=='X'){
                 if(i!=s.size()-1 && s[i+1]=='L'||s[i+1]=='C'||s[i+1]=='D'||s[i+1]=='M'){
                    continue;
                }
                
                if(i!=0 && s[i-1]=='I'){
                    sum+=9;
                }
                else{
                    sum+=10;
                }
                
            }
            
            else if(s[i]=='L'){
                 if(i!=s.size()-1 && s[i+1]=='C'||s[i+1]=='D'||s[i+1]=='M'){
                    continue;
                }
                
                if(i!=0 && s[i-1]=='X'){
                    sum+=40;
                }
                else{
                    sum+=50;
                }
                
            }
            else if(s[i]=='C'){
                 if(i!=s.size()-1 && s[i+1]=='D'||s[i+1]=='M'){
                    continue;
                }
                
                if(i!=0 && s[i-1]=='X'){
                    sum+=90;
                }
                else{
                    sum+=100;
                }
                
            }
            else if(s[i]=='D'){
                 if(i!=s.size()-1 && s[i+1]=='M'){
                    continue;
                }
                
                if(i!=0 && s[i-1]=='C'){
                    sum+=400;
                }
                else{
                    sum+=500;
                }
                
            }
            else if(s[i]=='M'){
        
                
                if(i!=0 && s[i-1]=='C'){
                    sum+=900;
                }
                else{
                    sum+=1000;
                }
                
            }
            
            
        }
        
        return sum;
    }
};



/* The function converts Roman numeral into integer 
 
For example, "MCMXCIV". The function takes a string as an example and converts "MCMXCIV" to an integer equal to 1994 and return it.

*/
