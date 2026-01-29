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
        if(head->next==nullptr) return true;

        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=nullptr;
        while(fast&&fast->next){
            fast=fast->next->next;
            prev=slow;
            slow=slow->next;
        }
        if (fast != nullptr) {   
            slow = slow->next;
        }
        prev->next = nullptr;

        ListNode* next=nullptr;
        ListNode* k=nullptr;
        while(slow){
            next=slow->next;
            slow->next=k;
            k=slow;
            slow=next;
        }
        ListNode* temp=head;
        while(k){
            if(temp->val!=k->val){
                return false;
            }
            temp=temp->next;
            k=k->next;
        }
        return true;
    }
};