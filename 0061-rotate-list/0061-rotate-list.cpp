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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* curr = head;

        if(head==NULL || head->next == NULL) return head;

        ListNode* prev = NULL;
        ListNode* start = head;

        int n=1;

        while(curr->next != NULL){
            curr = curr->next;
            n++;
        }
        k = k%n;

        curr = head;

        while(k--){
            while(curr->next!=NULL){
                prev = curr;
                curr = curr->next;

            }
            curr->next = start;
            prev->next = NULL;
            start = curr;
        }
        return start;
    }
};