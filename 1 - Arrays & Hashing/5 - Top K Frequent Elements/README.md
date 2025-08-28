# 347. [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)

Given an integer array `nums` and an integer `k`, return the `k` most frequent elements. You may return the answer in any order.

## Thought process

Create a map of counts from `nums` and sort it by value. Unfortunately, the only way I could come up with was to copy it into a vector and sort it with a custom lambda. Then, output the top `k` results. Time-complexity $O(n \log n)$, space-complexity $O(n)$.

We can improve on the time complexity by doing bucket sort, since we know that the range of the elements we are sorting is bounded by the size of `nums`. Then the runtime becomes $O(n)$.

## Take-aways

The main take-away is the sad realization that there is no simple way to sort a map by value. Also, every time there is sorting involved, it is worth it to check the range: bucket sort could be worth it!
