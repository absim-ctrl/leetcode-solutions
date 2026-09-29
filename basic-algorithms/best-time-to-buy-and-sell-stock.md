# Best Time to Buy and Sell Stock

**Difficulty:** Easy

**LeetCode:** [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

## Approach

The goal is to find the maximum profit that can be obtained by buying a stock on one day and selling it on a later day.

I keep track of the minimum stock price seen so far. For every price, I calculate the possible profit by subtracting the minimum price from the current price.

If the calculated profit is greater than the maximum profit found so far, the maximum profit is updated.

## Time Complexity

**O(n)**

The array is traversed only once.

## Space Complexity

**O(1)**

Only a few variables are used, regardless of the input size.

## Test Cases

### Typical Test Case

**Input:**

```text id="cvj7qm"
prices = [7,1,5,3,6,4]
```

**Output:**

```text id="wz8ikm"
5
```

The maximum profit is obtained by buying at `1` and selling at `6`.

### Edge Case

**Input:**

```text id="lnuop1"
prices = [7,6,4,3,1]
```

**Output:**

```text id="x7p4y7"
0
```

No profitable transaction is possible because the stock price keeps decreasing.

## Notes / Edge Cases

* The stock must be bought before it is sold.
* Only one transaction is allowed.
* If no profit is possible, the answer is `0`.
* The minimum price seen so far is updated while traversing the array.
* The maximum profit is updated whenever a better profit is found.
