// Reverse a singly linked list and return the new head of the reversed list

#include <bits/stdc++.h>    
using namespace std;

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    ListNode dummy;
    ListNode *curr = &dummy;

    ListNode *l1 = list1;
    ListNode *l2 = list2;

    while (l1 && l2)
    {
        if (l1->val <= l2->val)
        {
            curr->next = l1;
            l1 = l1->next;
        }
        else
        {
            curr->next = l2;
            l2 = l2->next;
        }
        curr = curr->next;
    }

    curr->next = l1 ? l1 : l2;

    return dummy.next;
}

int main() {}