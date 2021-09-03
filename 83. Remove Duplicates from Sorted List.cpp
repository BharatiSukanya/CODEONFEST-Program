Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

Example 1:

Input: head = [1,1,2]
Output: [1,2]
Example 2:


Input: head = [1,1,2,3,3]
Output: [1,2,3]

Solution :

Time Complexity - O(n) 
Space Complexity - O(1) 
  
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int>res;
        ListNode* temp = head;
        while(temp)
        {
            res.push_back(temp->val);
            temp = temp->next;
        }
        
        temp = head;
        
        for(int i=res.size()-1; i>=0;i--)
        {
            temp->val = res[i];
            temp =temp->next;
        }
        return head;
    }
};
