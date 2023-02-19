# 3. [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

Given a string `s`, find the length of the longest substring without repeating characters.

## Thought process

As a sliding window problem, we work with a left and a right pointer. We maintain a map of the elements currently contained in the window where the values are the index at which we found them, and increase the right pointer as long as there are no collisions. Given a collision, we must move the left pointer to the left of the index where we first found the current character, so that the window is still consisting of each character only once.

This time complexity is $O(n)$ and the space complexity is $O(1)$, since the map consists of at most 256 keys.

## Take-aways

I had originally moved the left pointer in a while loop, while mantaining a set. Storing the index is a great idea that saves up time, even though the worst-case scenario runtime is the same.