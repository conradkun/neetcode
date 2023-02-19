# 424. [Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/)

You are given a string `s` and an integer `k`. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most `k` times.

Return the length of the longest substring containing the same letter you can get after performing the above operations.

## Thought process

I took a relatively naive approach which has the same asymptotic runtime but is slower in practice. Basically, iterate from `A` to `Z` and for each character find the maximum window. This is easily done with two pointers that maintain a window where the maximum number of modifications never exceeds `k`.

This time complexity is $O(n)$ and the space complexity is $O(1)$.

## Take-aways

A slightly more interesting approach involved dealing with frequencies. For every possible window, we want to correct the minimum number of characters possible. For that, we consider the most frequent character in that window to be the character we want to change the rest into. This way, a window is feasible if it satisfies: `len(window) - maxFreq <= k`. Instead of having to find the maximum frequency every time, we keep a `maxFreq` variable that carries the maximum overall frequency up to that point (while still updating the map of frequencies accordingly). The trick is to never shrink the window, and only increase it when the condition is satisfied again. The code below should be self-explanatory:

```
class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freqs;
        int maxLen = 0, maxFreq = 0;

        int i = 0;
        for (int j = 0; j < s.size(); j++){
            freqs[s[j]] += 1;   // update frequencies
            maxFreq = max(maxFreq, freqs[s[j]]);

            // if we do not satisfy the constraint, we do not increase the window
            if (j - i + 1 - maxFreq > k){
                freqs[s[i]]--;  // update frequencies
                i++;            // maintains size of window constant
            }

            maxLen = max(maxLen, j - i + 1);
        }
        return maxLen;
    }
};
```

This idea of mantaining a maximum window keeps reappearing, so it is worth keeping in mind.