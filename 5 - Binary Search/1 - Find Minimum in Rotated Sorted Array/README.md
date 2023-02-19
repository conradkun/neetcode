# 153. [Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/)

Suppose an array of length `n` sorted in ascending order is rotated between `1` and `n` times. For example, the array `nums = [0,1,2,4,5,6,7]` might become:

- `[4,5,6,7,0,1,2]` if it was rotated 4 times.
- `[0,1,2,4,5,6,7]` if it was rotated 7 times.

Notice that rotating an array `[a[0], a[1], a[2], ..., a[n-1]]` 1 time results in the array `[a[n-1], a[0], a[1], a[2], ..., a[n-2]]`.

Given the sorted rotated array `nums` of unique elements, return the minimum element of this array.

You must write an algorithm that runs in $O(log n)$ time.

## Thought process

Check checks if the array is sorted (`nums[low] < nums[high]`), and if so will output `nums[low]`. Otherwise, we must recurse into the half that contains the "break". We can find it by checking whether the midpoint is higher than the `low` pointer: in that case we recurse into the second half, othwerwise into the first half.

## Take-aways

None.