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
    ListNode* insertionSortList(ListNode* head) {
        ListNode * dummy=new ListNode(0);
        ListNode* cur=head;
        ListNode* pos;
        while(cur!=nullptr){
            ListNode* nxt=cur->next;
            pos=dummy;
            while(pos->next!=nullptr && pos->next->val<cur->val){
                pos=pos->next;
            }
            cur->next=pos->next;
            pos->next=cur;
            cur=nxt;
        }
        return dummy->next;
    }
};