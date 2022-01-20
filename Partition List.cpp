/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* head, int x) {
    ListNode* temp1=new ListNode(0);
    ListNode* temp2=new ListNode(0);
    ListNode* prev1=temp1,*prev2=temp2;
    
    while(head){
        
        if (head->val<x){
            
            prev1->next=head;
            prev1=prev1->next;
        }
        else{
            prev2->next=head;
            prev2=prev2->next;
        }
        head=head->next;
    }
    prev1->next=temp2->next;
    prev2->next=NULL;
    return temp1->next;
}
