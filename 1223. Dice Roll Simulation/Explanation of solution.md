# Solution 1
The algorithm takes a dynamic programming approach using a 2D vector. The rows, y, represent the current roll of the dice (e.g. roll #1) and the columns, x, represent the face that the dice landed on. The cell value represents the possible number of permutations given we have rolled an x on the y'th dice roll.

![image](https://user-images.githubusercontent.com/91536829/155819652-b7955a8b-847b-446b-8633-be97a9c2508b.png)

Suppose `rollMax = {1,1,1,2,2,3}`
- For the first roll, there is only 1 way to possibly land on each dice face and the total number of rolls is 6
- For the 2nd roll:
	- Dice landing on 1, we have a permutation sequence (x,1). The number of permutations of x is the total permutations for the 1st dice roll minus the number of permutations where the first roll is 1. This equals 5 and is the same for dice landing on 2 and 3.
	- Dice landing on 4, we don't have the same restriction as above so there are 6 permutations. This is the same for dice landing on 5 and 6
- For the 3rd roll:
	- Dice landing on 1, we have permutation sequence (x,y,1). The number of permutations of rolling a dice three times with the third roll landing on 1 is equal to the total number of ways of rolling 2 dice minus the number of permutations where the 2nd roll landed on a 1. This equals 33 - 5 = 28
	- Dice landing on 4, The number of permutations of rolling a dice three times with the fourth roll landing on 4 is equal to the total number of permutations of rolling a dice 2 times minus the number of permutations where the 1st AND 2nd rolls are 4 (since we cannot have 3 4's consecutively). Another way of saying this is that the number of permutations of rolling a 4 on the 3rd roll is equal to the number of permutations of not rolling a 4 on the 1st roll OR not rolling a 4 on the 2nd roll. This statement can be translated to our dynamic programming matrix as (total permuations of 1st roll - permutations of rolling 4 on 1st roll) + (total permuations of 2nd roll - permutations of rolling 4 on 2nd roll) = (33 - 5) + (6 - 1) = 32
	- Dice landing on 6, same logic as dice landing on 4 but including the 0th roll (this is simply an additional row to make the logic work for row numbers < rollMax) which has all permutation = 0 and the total permutations = 1.
The matrix is continually built up using the above logic until all dice rolls are complete and it returns the final total. Since the totals add up very quickly, the running permutations are shown in `% (1e9 + 7)` form as required by the problem.
