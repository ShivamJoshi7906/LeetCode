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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prevNode = head;
        ListNode* temp = head -> next;
        int pos = 1;
        int first = -1;
        int prev = -1;
        int minDist = INT_MAX;
        while(temp -> next != nullptr){
            if((temp->val > prevNode->val && temp->val > temp->next->val) ||(temp->val < prevNode->val && temp->val < temp->next->val)) {
                if(first == -1){
                    first = pos;
                }else{
                    minDist = min(minDist,pos - prev);
                }
                prev = pos;
            }
            prevNode = temp;
            temp = temp -> next;
            pos++;
        }
        if(first == -1 || first == prev) {
            return {-1, -1};
        }
        int maxDist = prev - first;
        return {minDist,maxDist}; 
    }
};