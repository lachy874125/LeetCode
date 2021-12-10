# Solution 1
I used a vector to iteratively push back ListNode pointer addresses starting at the head and ending one before the tail. I then started at the tail and went backwards through the vector and linked list, assigning the `next` fields and then jumping to the new `next` and repeating.

The problem with this solution is that it uses an in-built data structure (vector) which adds computational time and space. I also admit I got lazy and didn't write a test unit for this solution.

# Solution 2
In this solution I use three ListNode pointers:
- `curr` - current node
- `prev` - previous node
- `next` - next node.

For each node, `next` is set to `prev` node, then `curr` advances to `next` node, `next` advances to next node, and the process is repeated. This method only requires one iteration through the list, so saves computational time and space and doesn't rely on in-built `vectors`.

For this solution I also wrote a test unit.