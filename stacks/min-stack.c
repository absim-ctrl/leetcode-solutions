#include <stdio.h>

#define MAX 100

int stack[MAX];
int minStack[MAX];

int top = -1;
int minTop = -1;

void push(int val)
{
    top++;
    stack[top] = val;

    if (minTop == -1 || val <= minStack[minTop])
    {
        minTop++;
        minStack[minTop] = val;
    }
}

void pop()
{
    if (top == -1)
        return;

    if (stack[top] == minStack[minTop])
    {
        minTop--;
    }

    top--;
}

int stackTop()
{
    return stack[top];
}

int getMin()
{
    return minStack[minTop];
}

int main()
{
    push(-2);
    push(0);
    push(-3);

    printf("Minimum: %d\n", getMin());

    pop();

    printf("Top: %d\n", stackTop());
    printf("Minimum: %d\n", getMin());

    return 0;
}
