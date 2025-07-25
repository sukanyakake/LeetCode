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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return head;
        ListNode* oddHead=head;
        ListNode* evenHead=head->next;
        ListNode* oddtemp=oddHead;
        ListNode* eventemp=evenHead;
        while(eventemp!=nullptr && eventemp->next!=nullptr){
            oddtemp->next=oddtemp->next->next;
            eventemp->next=eventemp->next->next;
            oddtemp=oddtemp->next;
            eventemp=eventemp->next;
        }
        oddtemp->next=evenHead;
        return oddHead;
    }
};