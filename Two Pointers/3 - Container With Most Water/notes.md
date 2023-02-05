# 11. [Container With Most Water](https://leetcode.com/problems/container-with-most-water/)

You are given an integer array height of length `n`. There are `n` vertical lines drawn such that the two endpoints of the ith line are `(i, 0)` and `(i, height[i])`.

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

## Thought process

I overcomplicated my life the first time I attempted this problem, but it is way simper than it looks. We start with a pointer to the first element, `i`, and a pointer to the last, `j`, and store the area of the setting as `maxArea`. The only way to possibly increase the area would be to move the index of the smallest between `height[i]` and `height[j]` inwards (moving the one with the bigger height would preserve the total hight to at most the smaller height, so the result would be strictly smaller given the smaller base). After moving the index, we recalculate the area and compare with `maxArea`. Note that now we have the same problem as at the beginning, so we apply the same reasoning until `i == j`.

Time complexity is $O(n)$ and space complexity is $O(1)$.

## Take-aways

Not much to say.