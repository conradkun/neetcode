# 217. [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)

Given an integer array `nums`, return `true` if any value appears at least twice in the array, and return `false` if every element is distinct.

## Thought process

Create a set to store all numbers and check if they are already in the set as you store them. Time-complexity $O(n)$ (amortized due to hash map), space-complexity $O(n)$.

Alternatively, sort the array in-place and check for equal consecutive numbers. Time-complexity $O(n)$ (in this particular case due to radix sort), space-complexity $O(n)$.

## Take-aways

The solutions brought to my attention two interesting concepts: the `std::unsordered_set` and *radix sort*. The former allows for faster insertions and lookups on average, while the latter helps speed up the sorting in the alternative approach.

### `std::unordered_set`

This feature from `C++11` implements a set as a hash table. Below are some key differences with `std::set`:

- `set` is implemented as a red-black tree, while `unordered_set` is a hash map. All other properties derive from this.
- `set` uses *less memory* than `unordered_set` to store the same number of elements.
- `unordered_set` has average lookup complexity of $O(1)$ (and is faster on average for most operations), but `set` has the *best worst case complexity*, for example for `insert` ( $O(\log n)$ vs $O(n)$ ).
- `set` maintains a *sorted representation* of the elements, which can be useful in some cases.
- two instances of `set` can be *compared lexicographically* with `<`, `>`, `<=`, etc...  

### Inserting $n$ elements in an empty red-black tree

This is relevant and not at all trivial (are we sure it's faster than the hash map? In worst case, it is not). Note that the first insertion is $O(1)$, and every other insertion is $O(\log x)$, if we are inserting the $x + 1$-th element. Adding up $\log(x)$ from 0 to $n$ is equal to $\log n!$ by logarithm laws. By [Stirling's approximation](https://en.wikipedia.org/wiki/Stirling%27s_approximation), this is $O(n \log n)$.


### Radix sort / bucket sort

This algorithm is for data that can be sorted lexicographically, such as integers, words, etc...

In the case of integers, we operate on each digit starting from the least significant and moving right. We create buckets from 0 to 9 and place every element in the bucket it corresponds to according to its least significant digit. This is repeated with the next digit, keeping the old order in the case of ties, and then again for the following digit until there are no more left.

The time complexity is $O(nw)$ where $n$ is the number of keys (in our case, number of unique digits, 10) and $w$ is the key lenght (in our case, the maximum number of digits across all elements, which seems to be 1 in the test cases of this problem). 

