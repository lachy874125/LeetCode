struct ListNode {
    int val;
    ListNode *next{};

    ListNode(int x) : val{x} {}
};

class Solution {
public:
    bool hasCycle(ListNode *head);
};