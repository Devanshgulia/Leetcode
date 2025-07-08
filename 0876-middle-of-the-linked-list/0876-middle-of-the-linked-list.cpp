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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        ListNode* next=NULL;
        int idx=0;
        while (temp != NULL){
            idx++;
            temp=temp->next;
        }
        
        temp=head;
        int mid=(idx/2)+1;
        idx=1;
        while(temp!=NULL){
            if (idx==mid){
                head=temp;
                break;
            }
            next=temp->next;
            temp=next;
            idx++;
        }
        return temp;
    }
};