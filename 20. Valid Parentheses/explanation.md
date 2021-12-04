# Submission 1
## High Level Logic
- Function iterates through the input string and stores opening brackets in a 'stack' string `bracket_stack`. Upon finding a closing bracket, it checks if the last character stored was the matching opening bracket. If so it eliminated the pair. If not, the input string fails.

## Problem 1
- The function fails for test string `()[]}{` as it gets to the first `elif` expression. This is because `bracket_stack` will be empty from the first two brackets eliminating each other. It then tries to access the last element of `bracket_stack` which doesn't exist and thus throws an out-of-range error.

# Submission 2
## Fix 1
- The fix is to check if `bracket_stack` is empty following the check that it is not an opening bracket. If it is empty then there is a closing bracket with no previous opening bracket, which is a failed input.
