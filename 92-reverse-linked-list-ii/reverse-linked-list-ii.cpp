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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy;
        int count=1;
        while(count<left){
            prev=prev->next;
            count++;
        }
        ListNode * proprev=nullptr;
        ListNode* first=prev->next;
        ListNode* temp=prev->next;
        count=0;
        ListNode* nxt=nullptr;
        while(right-left>=count){
             nxt=temp->next;
            temp->next=proprev;
            proprev=temp;
            temp=nxt;
            count++;
        }
        prev->next=proprev;
         first->next=nxt;
        return dummy->next;

    }
};