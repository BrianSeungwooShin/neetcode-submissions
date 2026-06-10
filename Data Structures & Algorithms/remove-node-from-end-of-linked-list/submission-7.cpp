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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* toRemovePrev = head;
        ListNode* fast = head;
        
        for(int i = 0; i < n; i++){
            fast = fast->next;
        }

        if(fast == nullptr){
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }       

        while(fast->next != nullptr){
            toRemovePrev = toRemovePrev->next;
            fast = fast->next;
        
        }

        ListNode* temp = toRemovePrev->next;

        toRemovePrev->next = temp->next;

        delete temp;
        return head;




    }
};
