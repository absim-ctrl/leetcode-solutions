#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode* next;
};

struct ListNode* createNode(int value)
{
    struct ListNode* newNode =
        (struct ListNode*)malloc(sizeof(struct ListNode));

    newNode->val = value;
    newNode->next = NULL;

    return newNode;
}

struct ListNode* mergeTwoLists(
    struct ListNode* list1,
    struct ListNode* list2)
{
    struct ListNode dummy;
    struct ListNode* current = &dummy;

    dummy.next = NULL;

    while (list1 != NULL && list2 != NULL)
    {
        if (list1->val <= list2->val)
        {
            current->next = list1;
            list1 = list1->next;
        }
        else
        {
            current->next = list2;
            list2 = list2->next;
        }

        current = current->next;
    }

    if (list1 != NULL)
        current->next = list1;
    else
        current->next = list2;

    return dummy.next;
}

void printList(struct ListNode* head)
{
    while (head != NULL)
    {
        printf("%d", head->val);

        if (head->next != NULL)
            printf(" -> ");

        head = head->next;
    }

    printf("\n");
}

int main()
{
    struct ListNode* list1 = createNode(1);
    list1->next = createNode(2);
    list1->next->next = createNode(4);

    struct ListNode* list2 = createNode(1);
    list2->next = createNode(3);
    list2->next->next = createNode(4);

    struct ListNode* result =
        mergeTwoLists(list1, list2);

    printf("Merged list: ");
    printList(result);

    return 0;
}