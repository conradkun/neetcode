# 121. [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

You are given an array `prices` where `prices[i]` is the price of a given stock on the `i`th day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return `0`.

## Thought process

We operate with a sliding window approach (which in this case I cannot differentiate from 2 pointers...). As long as the right pointer contains a value that is higher than the left pointer, we keep on updating our maximum profit and increase the right pointer. Whenever we find a lower value with the right pointer, we move the left pointer there and the right pointer to the right of the left pointer. Intuitively, we are finding the local minimums and checking how much profit we can get from buying at each.

This time complexity is $O(n)$ and the space complexity is $O(1)$.

## Take-aways

None.