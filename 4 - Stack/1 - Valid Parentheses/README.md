# 76. [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)

Given a string s containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is valid.

An input string is valid if:

- Open brackets must be closed by the same type of brackets.
- Open brackets must be closed in the correct order.
- Every close bracket has a corresponding open bracket of the same type.


## Thought process
The quintessential stack problem. We iterate over the characters. If the character is an open bracket, we add it to the stack. If the character is a closed bracket, we compare it with the character at the top of the stack. If they match, we can pop the top element; if they don't, we have a malformed string. 


## Take-aways
None.