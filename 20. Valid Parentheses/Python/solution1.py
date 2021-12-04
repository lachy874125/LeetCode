class Solution:
    def isValid(self, s: str) -> bool:
        if len(s) % 2 != 0:
            return False
        
        opening_brackets = ['{', '(', '[']
        closing_brackets = ['}', ')', ']']  # bracket indexes must match
        
        bracket_stack = [s[0]]

        for char in s[1:]:
            if char in opening_brackets:
                bracket_stack.append(char)
            elif closing_brackets.index(char) == opening_brackets.index(bracket_stack[-1]):
                del bracket_stack[-1]
            else:
                return False
        if len(bracket_stack) != 0:
            return False
        
        return True