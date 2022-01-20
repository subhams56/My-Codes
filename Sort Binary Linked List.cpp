/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    ListNode *P1 = A;
    ListNode *P2 = A;
    
    while(P1){
        
        if ( P1->val==0){
            swap(P1->val,P2->val);
            P2=P2->next;
        }
        P1=P1->next;
    }
    return A;
}
