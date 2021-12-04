# Submission 1
## High Level Logic
- Function will iterate through the input string and store opening brackets in a 'stack' string `bracket_stack`. Upon finding a closing bracket, it checks if the last character stored was the matching opening bracket. If so it eliminated the pair. If not, the input string failed.

## Problem 1
- The function failed for test string `()[]}{` as it got to the first `elif` expression. This is because `bracket_stack` would be empty from the first two brackets eliminating each other. It then tries to access `bracket_stack[-1]` which throws an out-of-range error.

# Submission 2
## Fix 1
- The fix was to check if `bracket_stack` was empty following the check that it is not an opening bracket. If it is empty then there will be a closing bracket with no previous opening bracket, which is a failed input.