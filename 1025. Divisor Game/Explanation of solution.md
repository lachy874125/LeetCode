# Solution 1
The solution is that if `n` is even, Alice will win, otherwise she will lose. This is because if `n` is odd, whichever factor Alice chooses will always result in an even number for Bob. Bob can then just choose factor `1` to make Alice's number odd again. This pattern will repeat until Alice is left with `n = 1` at which point she has lost. The opposite is true if `n` begins with an even number.

Time complexity: O(1)

Space complexity: O(1)