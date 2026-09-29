# Binary Search

**Difficulty:** Easy

**LeetCode:** [Binary Search](https://leetcode.com/problems/binary-search/)

## Approach

Binary Search is used to find a target value in a sorted array.

Two pointers, `left` and `right`, are used to represent the current search range. The middle element is calculated using:

```text
mid = left + (right - left) / 2
```

If the middle element is equal to the target, its index is returned.

If the middle element is smaller than the target, the search continues in the right half.

If the middle element is greater than the target, the search continues in the left half.

The process continues until the target is found or the search range becomes empty.

## Time Complexity

**O(log n)**

The search range is divided approximately in half after every iteration.

## Space Complexity

**O(1)**

Only a few variables are used.

## Test Cases

### Typical Test Case

**Input:**

```text id="1t2z8r"
nums = [-1,0,3,5,9,12]
target = 9
```

**Output:**

```text id="jj8h5h"
4
```

The target `9` is present at index `4`.

### Edge Case

**Input:**

```text id="m8d3x1"
nums = [5]
target = 5
```

**Output:**

```text id="u4xq3k"
0
```

The array contains only one element, and that element is the target.

## Notes / Edge Cases

* The input array must be sorted for Binary Search to work correctly.
* If the target is not present, the function returns `-1`.
* A single-element array is handled correctly.
* The search range is reduced after every comparison.
* The expression `left + (right - left) / 2` is used to calculate the middle index safely.
