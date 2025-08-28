# 128. [Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)

Given an unsorted array of integers `nums`, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in $O(n)$ time.

## Thought process

We create a hash map with `int` keys and `bool` values that will store a set of the numbers present in `nums`. Then we iterate over `nums` and for each element $n$ we check if it is the start of a sequence (by checking whether $n - 1$ is in the set). If it isn't we skip it, if it is we follow the sequence and measure its length (by querying $n + 1$ successively). We keep track of the longest sequence and output it. The time complexity is $O(n)$ and the space complexity is also $O(n)$.

## Take-aways

Not much to say, hard problem until you realize the trick.
