#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[] = "A man, a plan, a canal: Panama";

    int left = 0;
    int right = strlen(str) - 1;
    int palindrome = 1;

    while (left < right)
    {
        while (left < right && !isalnum(str[left]))
            left++;

        while (left < right && !isalnum(str[right]))
            right--;

        if (tolower(str[left]) != tolower(str[right]))
        {
            palindrome = 0;
            break;
        }

        left++;
        right--;
    }

    if (palindrome)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}