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
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while(temp -> next){
            count++;
            temp = temp -> next;
        } count++;
        temp = head;
        count /= 2;
        count++;
        while(count > 1){
            temp = temp -> next;
            count--;
        }
        return temp;
    }
};