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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==nullptr) return head;
        ListNode* i=nullptr;
        ListNode* j=head;
        ListNode* k=j->next;
        while(j){
            j->next=i;
            i=j;
            j=k;
            if(k->next!=nullptr)
                k=k->next;
            else break;
        }
        k->next=i;
        return k;
    }
};