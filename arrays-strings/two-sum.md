# Two Sum

**Difficulty:** Easy

**LeetCode:** [Two Sum](https://leetcode.com/problems/two-sum/)

## Approach

The array is traversed using two loops. For every element, the remaining elements are checked to determine whether their sum is equal to the target value.

When the required pair is found, their indices are returned.

## Time Complexity

O(n²)

Two nested loops are used to check pairs of elements.

## Space Complexity

O(1)

No additional data structure proportional to the input size is used.

## Test Cases

### Typical Test Case

```text
Input:
nums = [2,7,11,15]
target = 9

Output:
[0,1]
```

### Edge Case

```text
Input:
nums = [3,3]
target = 6

Output:
[0,1]
```

## Notes / Edge Cases

* The same array element cannot be used twice.
* The two indices must be different.
* Duplicate values can form the required pair.
