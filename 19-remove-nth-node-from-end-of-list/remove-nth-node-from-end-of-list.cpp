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
        if( head == NULL || n == 0) return head;
        ListNode* temp = head;
        int len=0;
        while(temp != nullptr){
            len++;
            temp = temp -> next;
        }
        temp = head;
        len = len - n;
        if(len == 0) return head->next;
        int i=1;
        while(i!=len){
            temp = temp->next;
            i++;
        }
        temp->next = temp->next->next;
        return head;
    }
};