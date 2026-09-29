# Valid Parentheses

**Difficulty:** Easy

**LeetCode:** [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)

## Approach

A stack is used to check whether the brackets are correctly matched.

Whenever an opening bracket such as `(`, `[`, or `{` is encountered, it is pushed onto the stack.

When a closing bracket is encountered, the top element of the stack is checked. It must be the corresponding opening bracket.

If the brackets do not match, the string is invalid.

After processing the complete string, the stack must be empty for the string to be valid.

## Time Complexity

**O(n)**

Each character is processed once.

## Space Complexity

**O(n)**

In the worst case, all opening brackets may be stored in the stack.

## Test Cases

### Typical Test Case

**Input:**

```text
s = "()[]{}"
```

**Output:**

```text
true
```

All opening and closing brackets are correctly matched.

### Edge Case

**Input:**

```text
s = "("
```

**Output:**

```text
false
```

The opening bracket does not have a corresponding closing bracket.

## Notes / Edge Cases

* An opening bracket is pushed onto the stack.
* A closing bracket must match the most recently opened bracket.
* A closing bracket with an empty stack makes the string invalid.
* After processing all characters, the stack must be empty.
* The three valid bracket pairs are `()`, `[]`, and `{}`.
