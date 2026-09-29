# Min Stack

**Difficulty:** Medium

**LeetCode:** [Min Stack](https://leetcode.com/problems/min-stack/)

## Approach

A stack is used to store the elements. A second stack called `minStack` is used to keep track of the minimum value.

Whenever an element is pushed into the main stack, it is also pushed into the minimum stack if it is smaller than or equal to the current minimum.

When an element is removed, it is also removed from the minimum stack if it is equal to the current minimum.

This allows the minimum element to be obtained directly without searching through the entire stack.

## Operations

The stack supports the following operations:

* `push()` - Adds an element to the stack.
* `pop()` - Removes the top element.
* `top()` - Returns the top element.
* `getMin()` - Returns the minimum element.

## Time Complexity

**O(1)** for each operation.

The minimum element can be obtained directly from the minimum stack.

## Space Complexity

**O(n)**

Two stacks are used to store the elements and minimum values.

## Test Cases

### Typical Test Case

**Operations:**

```text
push(-2)
push(0)
push(-3)
getMin()
pop()
top()
getMin()
```

**Output:**

```text
-3
0
-2
```

### Edge Case

**Operations:**

```text
push(1)
getMin()
```

**Output:**

```text
1
```

When there is only one element, that element is also the minimum.

## Notes / Edge Cases

* The minimum value should be updated whenever a smaller value is pushed.
* Duplicate minimum values must also be handled correctly.
* `getMin()` should work in O(1) time.
* The minimum stack helps avoid searching through all elements whenever the minimum is requested.
