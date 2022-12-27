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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *prev, *cur;
        while(head != NULL && head->val == val) head = head->next;
        cur = head;
        while(cur != NULL){
            if(cur->val == val){
                prev->next = cur->next;
            }else{
                prev = cur;
            }
            cur = cur->next;
        }
        return head;
    }
};