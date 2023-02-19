# 153. [Search in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/)

There is an integer array `nums` sorted in ascending order (with distinct values).

Prior to being passed to your function, `nums` is possibly rotated at an unknown pivot index `k` (`1 <= k < nums.length`) such that the resulting array is `[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]` (0-indexed). For example, `[0,1,2,4,5,6,7]` might be rotated at pivot index `3` and become `[4,5,6,7,0,1,2]`.

Given the array `nums` after the possible rotation and an integer target, return the index of target if it is in `nums`, or `-1` if it is not in `nums`.

You must write an algorithm with $O(log n)$ runtime complexity.

## Thought process

We maintain a `low` and a `high` pointer, and run while `low < high`. We check if the first half is sorted by comparing `nums[low]` and `nums[mid]`. If so, we must move `high` to `mid` if `target` is within the first half, and `low` to `mid + 1` otherwise.

If the first half isn't sorted, the second is, and we follow a similar procedure.

## Take-aways

None.