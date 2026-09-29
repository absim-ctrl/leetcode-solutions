#include <stdio.h>

int main()
{
    int nums[] = {-1, 0, 3, 5, 9, 12};
    int target = 9;

    int n = sizeof(nums) / sizeof(nums[0]);

    int left = 0;
    int right = n - 1;

    int answer = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            answer = mid;
            break;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    printf("%d\n", answer);

    return 0;
}