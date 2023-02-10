# 49. [Group Anagrams](https://leetcode.com/problems/group-anagrams/)

Given an array of strings `strs`, group the anagrams together. You can return the answer in any order.

An *Anagram* is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 
## Thought process

Create a map where the keys are `string` and the values are `int`, and an empty vector of vectors of strings, our solution. For every string in `strs`, we sort a copy of it and check if it exists in the map. If it does not, we add it to the map with the size of the map as key, and then append a vector containing the current string to the solution vector. If it exists, then the value associated with the string in the map is the index at which we should append the current string in our solution vector, so we do that. Time-complexity $O(nm \log m)$, where $n$ is the number of strings and $m$ is the maximum size of a string. Since $m < 100$, we can consider it to be $O(n)$. The space-complexity is $O(n)$.

## Take-aways

Nothing special here, but played around with `std::move` and `emplace_back` after looking at some faster solutions. Turns out you can emplace an empty vector by not passing any argument to the function (instead of passing the default constructor `{}`, which returns an error).