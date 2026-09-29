# Reverse Linked List

**Difficulty:** Easy

**LeetCode:** [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)

## Approach

The linked list is reversed using three pointers:

* `prev` - stores the previous node.
* `current` - stores the current node.
* `next` - temporarily stores the next node.

Initially, `prev` is set to `NULL` and `current` points to the head of the list.

For every node, the next node is saved first. Then the current node's `next` pointer is changed to point to the previous node.

After that, `prev` and `current` are moved forward.

The process continues until `current` becomes `NULL`. Finally, `prev` becomes the new head of the reversed list.

## Example

Original list:

```text
1 -> 2 -> 3 -> 4 -> 5
```

Reversed list:

```text
5 -> 4 -> 3 -> 2 -> 1
```

## Time Complexity

**O(n)**

Each node is visited exactly once.

## Space Complexity

**O(1)**

Only a few pointer variables are used.

## Test Cases

### Typical Test Case

**Input:**

```text
1 -> 2 -> 3 -> 4 -> 5
```

**Output:**

```text
5 -> 4 -> 3 -> 2 -> 1
```

### Edge Case

**Input:**

```text
1
```

**Output:**

```text
1
```

A linked list containing only one node remains unchanged after reversal.

## Notes / Edge Cases

* An empty linked list should return `NULL`.
* A single-node linked list remains unchanged.
* The next node must be stored before changing the current node's `next` pointer.
* Three pointers (`prev`, `current`, and `next`) are used in the iterative approach.
