# Solution 1
I struggled with this one for about an hour. I thought about adding all the numbers up, but this was no help. Nor was any of the other quirky mathematical tricks I thought of. My brain finally came up with bitwise operations. OR, AND, and NOT didn't work but XOR did. 

After looking at the properties of XOR on wikipedia, I realised this is because XOR is commutative (a sequence of XOR'd values can be rearranged without changing the solution) and any number XOR'd with itself is zero, and any number XOR's with zero is unchanged. Therefore for any sequence of any length, XORing all values will reveal the single number:
`a ^ b ^ c ^ d ^ b ^ a ^ c`
`= a ^ a ^ b ^ b ^ c ^ c ^ d`
`= 0 ^ 0 ^ 0 ^ d`
`= d`