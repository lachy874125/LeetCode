# Solution 1
This solution starts off by handling the initial cases of both linked lists being empty and then only one list being empty. Following these checks, neither list is empty and the solution iteratively checks nodes and links to the merged list. `list1` and `list2` pointers always point to the next unlinked node in their respective lists. This continues until one list reaches the end. From here the merged list links to the unfinished list and returns.

I could see no significant way of improving this solution.