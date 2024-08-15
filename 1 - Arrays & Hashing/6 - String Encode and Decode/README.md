# 271. [String Encode and Decode](https://leetcode.com/problems/encode-and-decode-strings/description/)

Design an algorithm to encode a list of strings to a single string. The encoded string is then decoded back to the original list of strings.

Please implement `encode` and `decode`

## Thought process

For every string, take the size and add it as a suffix, including a stop symbol that lets us know whan the encoded size ends and the string to be parsed begins (we choose `#`).

When decoding, we only have to read until we find `#`, take that as an int to obtain the size of the string that follows, and extract it. Next position after the string will be either the end of the encoded string or another number depicting the size of the next string to be decoded.

## Take-aways

We find some useful `std::string` manipulation functions:

- `std::to_string`: converts a number to `std::string`, including `int`, `float`, `long`, `double`, etc...
- `std::stoi`: converts an `std::string` to `int`. Similar functions exist like `std::stol` for long or `std::stoul` for unsigned long.