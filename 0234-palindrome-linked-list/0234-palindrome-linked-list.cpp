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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        string str="";
        while(temp!=NULL){
            str+=temp->val;
            temp=temp->next;
        }
        for(int i=0;i<str.length()/2;i++){
            if(str[i]!= str[str.length()-i-1]){
                return false;
            }
        }
        return true;
    }
};