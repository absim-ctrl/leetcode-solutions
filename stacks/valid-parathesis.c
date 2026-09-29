#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "()[]{}";

    char stack[100];
    int top = -1;

    int valid = 1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            top++;
            stack[top] = s[i];
        }
        else
        {
            if (top == -1)
            {
                valid = 0;
                break;
            }

            char opening = stack[top];
            top--;

            if ((s[i] == ')' && opening != '(') ||
                (s[i] == ']' && opening != '[') ||
                (s[i] == '}' && opening != '{'))
            {
                valid = 0;
                break;
            }
        }
    }

    if (top != -1)
    {
        valid = 0;
    }

    if (valid)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}