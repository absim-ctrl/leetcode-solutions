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

struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* prev = NULL;
    struct ListNode* current = head;

    while (current != NULL)
    {
        struct ListNode* next = current->next;

        current->next = prev;

        prev = current;
        current = next;
    }

    return prev;
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
    struct ListNode* head = createNode(1);

    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    printf("Original: ");
    printList(head);

    head = reverseList(head);

    printf("Reversed: ");
    printList(head);

    return 0;
}