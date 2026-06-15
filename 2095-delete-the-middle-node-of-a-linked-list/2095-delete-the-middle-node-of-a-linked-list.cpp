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
    ListNode* deleteMiddle(ListNode* head) {
        int n=0;
        ListNode* temp=head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        if(n==1)
            head=NULL;
        int i=0;
        temp=head;
        while(temp!=NULL){
            if(i==n/2-1){
                temp->next=(temp->next)->next;
                break;
            }
            i++;
            temp=temp->next;
        }
        // head->val=n/2;
        return head;
    }
};