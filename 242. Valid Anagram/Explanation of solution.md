# Solution 1
The algorithm iterates through the first array and keeps a record of every character encountered and the number of times it was encountered. Then it iterates through the second array and does the same thing except it subtracts each time a character is encountered. If the two strings are anagrams, every character count should be zero. The character data is stored in a hash map for rapid read and write time.

Time complexity: O(s + t) - s and t are the lengths of strings s and t

Space complexity: O(s + t) - if no characters are shared, the extra space used is the sum of the length of the strings