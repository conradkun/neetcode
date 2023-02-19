# 76. [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)

Given two strings `s` and `t` of lengths `m` and `n` respectively, return the minimum window substring of `s` such that every character in `t` (including duplicates) is included in the window. If there is no such substring, return the empty string `""`.

The testcases will be generated such that the answer is unique.

## Thought process
We maintain two maps, one for  `t` and one for the current window in `s`. We start by expanding the window by increasing the right pointer, and updating the map accordingly. Each time we add a new character, we check if it is in `t` and, if so, we check whether the counts for that character are the same in both maps. If so, we note it and we keep doing that until the condition is met for all characters in `t`.

When this happens, we have a substring, and we use a pair of `int` to keep track of the minimum substring indices. We can increase the left pointer (while updating the map for `s`) until the aforementioned condition is not met for all characters in `t`. Then we can go back to increasing the right pointer, but this time there is not need to keep a window bigger than our minimum substring indices, so we also increase the left pointer as long as we dont satisfy the condition. 


## Take-aways
This was a hard question. I could only do it in the naive way, where instead of keeping a variable to count how many characters from `t` were satisfied in the window, I just compared the two maps at each step of the way. I improved upon the solution I found by keeping the smaller window instead of allowing it to grow again.