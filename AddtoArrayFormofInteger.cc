class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
     
        int size= A.size()-1;   
        vector<int> res;
        int carry=0;
        
       while(K!=0|| size>=0 || carry>0){
           int mod=0;
           int a=0;
           
           if(K!=0){
               mod= K%10;
               K= K/10;
           }
           if(size>=0){
               a=A[size];
               size--;
           }
           
           int push= a+mod+carry;           
           carry= push/10;          
           push= push%10;          
           res.push_back(push);     
       }
            
        reverse (res.begin(), res.end());
        
        return res;
    }
};
