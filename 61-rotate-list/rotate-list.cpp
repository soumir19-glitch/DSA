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
        if(head==NULL||head->next==NULL)  return head;
        ListNode* i=head;
        ListNode* j=head;
        ListNode* temp=head;
        ListNode* newHead=i->next;
        int n=0;
        while(temp){
            temp=temp->next;
            n++;
        }
        k=k%n;
        if(k==0)    return head;
        for(int x=0;x<k && j->next;x++){
            j=j->next;
        }
        while(j->next){
            i=i->next;
            newHead=i->next;
            j=j->next;
        }
        j->next=head;
        i->next=nullptr;
        return newHead;
    }
};