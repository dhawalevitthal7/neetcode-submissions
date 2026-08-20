/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode* prev;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    void reorderList(ListNode* head) {
       ListNode* slow = head;
       ListNode* fast = head;
    //    find the middle 
       while(fast->next != nullptr && fast->next->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
       }
    //  reverse the seconbd half
        ListNode* curr = slow->next;
        slow->next = NULL;
        ListNode* prev = NULL;
        while(curr != NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
    //  merge both the halves
        ListNode* first = head;
        ListNode* second = prev;
        while(second != NULL){
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;
            first->next = second;
            second->next = temp1;
            first = temp1;
            second = temp2;
        }
    }
};
