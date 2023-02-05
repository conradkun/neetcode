# 125. [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)

A phrase is a *palindrome* if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` if it is a palindrome, or `false` otherwise.

## Thought process

This is an easy and boring problem, but it tested my `string` and `char` manipulation skills. Just go over the string skipping all non alphanumerical elements and turing into lower-case the upper-case characters. Then iterate from both sides checking they are the same until halfway. The time comlexity is $O(n)$ and the space complexity is also $O(n)$.

Can be made $O(1)$ if we do it in place but this problem is not worth rewriting or spending more time in.

## Take-aways

The main takeaways were handy functions from the `std`.

# `char` id

We can use `std::isalnum` to check if a `string` is alphanumerical, `std::isalpha` to check if it is a letter and `std::isdigit` to check if it is a number.

# `char` manipulation

We can change to lowercase with `std::tolower`, and it will automatically cast to `char` if we pass it the argument `std::locale`.