/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:  
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode * dummy= new ListNode();     
        ListNode * res= dummy;    
        
        int carry=0;        
        
        while(l1 || l2){
            
            int sum1=(l1 ? l1->val: 0); // if l1 != NULL then assign l1->val to sum1 else assign 0 
            int sum2=(l2 ? l2->val: 0); // same if else statement
            int sum= sum1+sum2+carry;   // carry obtained after addition operations
            int mod= sum%10;            // if sum>10 then we cant assign anything >10 so we get the modulus of the sum by ten
            res-> next= new ListNode(mod); // res->next ------ using constructor, res -> val = mod , res->next NULL
            carry= sum/10;                  // carry can be only 1 or 0 here we assign carry 0
            res=  res->next;                // going to next pointer
            l1= (l1 ? l1->next: l1); //check if is null or not
            l2= (l2 ? l2->next: l2); // same as above
            
        }
        
        if(carry==1){
            res->next= new ListNode(1);
        }
        
        return dummy->next;
    }
};
