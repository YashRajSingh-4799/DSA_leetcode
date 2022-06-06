/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode(int x) : val(x), next(NULL) {}
 *};
 */
class Solution
{
    public:
        ListNode* getIntersectionNode(ListNode *headA, ListNode *headB)
        {
            unordered_map<ListNode*, bool> mp;
            while (headA != nullptr)
            {
                mp[headA] = true;
                headA = headA->next;
            }

            while (headB != nullptr && mp.find(headB) == mp.end())
            {
                headB = headB->next;
            }

            return headB;
        }
};