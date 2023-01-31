# 1. [Two Sum](https://leetcode.com/problems/two-sum)

Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have *exactly one solution*, and you may not use the same element twice.

You can return the answer in any order.

## Thought process

Sort the vector to iterate it with two pointers from each end. If the sum of the elements pointed at is the target, we are done. If it's too little, increase the lower pointer, if it's too small, decrease the upper pointer. Since we have to return the original indices, we keep a vector of sorted indices instead of sorting the original array. Time-complexity `O(n log n)`, space-complexity `O(n)`.

Alternatively, create a map that inserts the elements in `nums` as keys and the respective indices as values. In the same loop, check if the key `target - nums[i]` is in the map, and if so return the index. Time-complexity `O(n)` (amortized), space-complexity `O(n)`.

## Take-aways

We have encountered some useful functions from the STL.

### std::iota

Fills the a range from `first` to `last` starting with `value` and increasing it by 1. Perfect for initialising vectors fast!

### Using lambda functions to do argsort

To obtain the sorted indices instead of the sorted values, we can just sort a newly created vector of indices (with the help of iota), and pass a lambda function to `std::sort` that compares the values instead of the indices.