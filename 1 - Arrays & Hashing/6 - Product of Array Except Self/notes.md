# 238. [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)

Given an integer array `nums`, return an array `answer` such that `answer[i]` is equal to the product of all the elements of `nums` except `nums[i]`.

The product of any prefix or suffix of `nums` is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in $O(n)$ time and without using the division operation.

## Thought process

We create two vectors: `left` and `right`. At position `i`, these will contain the products of all elements to the left of `i` and to the right of `i` respectively. To populate them, we just need to pass through the `nums` vector from each side, and make sure to leave the leftmost element of `left` and the rightmost element of `right` as 1. Then we just multiply the two vectors elementwise to obtain our result. Time complexity is $O(n)$, and space complexity is $O(n)$.

## Take-aways

None.
