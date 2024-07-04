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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *dummy=new ListNode(0);
        ListNode *head2=dummy;
        ListNode *temp=head;
        
        if (temp->next==NULL) return 0;
        temp=temp->next;
        while(temp!=NULL){
            int x=0;
            while(temp->val!=0){
             x+= temp->val;
             temp=temp->next;
            }
            dummy->next=new ListNode(x);
            dummy=dummy->next;
            temp=temp->next;
        }
        
        return head2->next;;
    }
};