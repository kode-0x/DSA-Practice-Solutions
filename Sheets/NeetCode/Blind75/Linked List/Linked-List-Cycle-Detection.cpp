// Determine whether the linked list contains a cycle and return 'true' if it does, otherwise return 'false'

#include <bits/stdc++.h>
using namespace std;

bool hasCycle(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true;
    }

    return false;
}

int main()
{
}