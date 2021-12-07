# Solution 1
My first solution involved using the in-built `vector` container to create the stack. The `push()`, `pop()`, and `top()` methods of `MinStack` just used the `push_back()`, `pop_back()`, and `back()` methods of the `vector` class. For `getMin()`, I used a simple `min` variable to hold the current minimum value as the code iterated through the `vector`.

The problem with this solution is that it didn't satisfy the problem's requirement to retrieve the minimum element in constant time. Instead it retrieves it in O(n) time. Also it seemed like more of a 'hack' solution as it just 'piggybacked' off of an in-built data structure to create the stack.

# Solution 2
Solution 2 solved the retrieving of the minimum value in O(1) time by storing the current minimum value in a separate `vector`  `min_stack` with the same length as the main `stack` vector. That way, retrieving the minimum `val` simply required calling the `back()` method of `min_stack`.

However, the problem of using an in-built data structure to create the stack still remained.

# Solution 3
Solution 3 uses a doubly-linked list instead of a `vector` to create the stack. The `tail` pointer keeps track of the last node in the list. Within each node, both the `val` and current `min` are stored, allowing `getMin()` to return by retrieving the `min` from the tail end node of the linked-list.

I was having troubles with accessing deleted memory because if a list was fully popped, the next call to `push` involved my original code checking if `tail == nullptr` but `tail`  was deleted so an error was thrown. Once I figured out what was going wrong, I added a `length` variable to track the length of the linked list and used that in the `push` call instead.