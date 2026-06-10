/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getListLength(ListNode*head){
        int length = 0;
        while(head!= nullptr){
            length++;
            head = head->next;
        }
        return length;
    }

    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int lengthA = getListLength(headA);
        int lengthB = getListLength(headB);

        if (lengthA > lengthB){
            int lengthDiff = lengthA - lengthB;
            while(lengthDiff != 0){
                headA = headA->next;
                lengthDiff--;
            }
        } else if(lengthB > lengthA){
            int lengthDiff = lengthB - lengthA;
            while(lengthDiff != 0){
                headB = headB->next;
                lengthDiff--;
            }
        }
        
        while(headA && headB){
            if(headA == headB){
                return headA;
            }
            
            headA = headA->next;
            headB = headB->next;
        }

        return nullptr;
    }
};