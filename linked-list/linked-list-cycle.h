struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
    public:
        bool hasCycle(ListNode *head) {
            ListNode *main = head, *second = head;

            while (second != nullptr && second->next != nullptr)
            {
                main = main->next;
                second = second->next->next;

                if(main == second) return true;
            }

            return false;
        }
    };