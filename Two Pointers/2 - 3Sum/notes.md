# 15. [3Sum](https://leetcode.com/problems/3sum/)

Given an integer array `nums`, return all the triplets `[nums[i], nums[j], nums[k]]` such that `i != j`, `i != k`, and `j != k`, and `nums[i] + nums[j] + nums[k] == 0`.

Notice that the solution set must not contain duplicate triplets.

## Thought process

We sort `nums`. For each element in nums, we will basically do 2Sum with the remaining vector to the right of the current element. If the current element is the same as in the previous iteration, we skip it to avoid duplicates. Note that 2Sum can be done in linear time given a sorted array by keeping two pointers, one on each edge of the array.

Overall, we have a time complexity of $O(n^2)$ from iterating over every element and doing 2Sum for each. Space complexity is $O(1)$ is we assume sorting does not use any extra memory and do not consider input and output.

## Take-aways

Not much to say, hard problem until you realize the trick.