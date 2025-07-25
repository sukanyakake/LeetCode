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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* prev=new ListNode(-1);
        ListNode* cur=prev;
        ListNode* even=head;
        ListNode* odd=head->next;
        while(odd!=nullptr){
            prev->next=odd;
            even->next=odd->next;
            odd->next=even;
            prev=even;
            even=even->next;
            if(even==nullptr) break;
            odd=even->next;
        }
    return cur->next;
    }
};