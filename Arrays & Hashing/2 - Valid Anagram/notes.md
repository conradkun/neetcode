# 242. [Valid Anagram](https://leetcode.com/problems/valid-anagram/)

Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

An *Anagram* is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

## Thought process

Create a map (dictionary) where the keys are characters and the values are their counts. The map, `u`, increases the counter when iterating over `s`, and decreases it when iterating over `t`. Then we just check that all the entries are 0. Time-complexity $O(n)$ (the number of elements in the map is basically constant since it's bounded above by 26, or it can be implemented as a list of 26 ints), space-complexity $O(1)$.

Alternatively sort both strings and compare them.

## Take-aways

As with the previous problem, we find `std::unordered_map` as an alternative to `std:map`. This feature from `C++11` implements a map as a hash table instead of a red-black tree. The consequences are as with sets.