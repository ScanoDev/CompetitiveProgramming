//If we have A number of ways of doing taks 1
//and b number of ways of doing task 2
// the total number of ways to choose one of the task
// is equals to A + B

//If we have A number of ways of doing Task1 and 
//B number of ways of doing Task2 then 
//the total number of ways of doing both the tasks is equal to A*B.

//*** FACTORIAL  ****
//The main use of factorial is counting the number of 
//permutations (number of ways of arranging some objects). 
//It can be used to answer following types of questions:
//Question 1. A class has just 3 seats vacant. Three people P, A, and R arrive at the same time. In how many ways can P, A, and R be arranged on those 3 vacant seats?
//Question 2. Find the number of ways of arranging 5 people if 2 of them always sit together?
//Question 3. Find all the three-letter words beginning and ending with a vowel. Given that repetition of alphabets is not allowed.

//*** PERMUTATIONS ***
//A. Permutation with repetition:
//Question: How many 3-digit numbers greater than 500 can be formed using 3, 4, 5, and 7?
//Solution: Since a three-digit number, greater than 500 will have either 5 or 7 at its hundredth place, we have 2 choices for this place. There is no restriction on 
//repetition of the digits, hence for the remaining 2 digits we have 4 choices each. So the total permutations are: 2 × 4 × 4 = 32
//B. Permutation without repetition:
//Question: How many 3-digit numbers divisible by 3 can be formed using digits 2, 4, 6, and 8 without repetition?
//Solution: For a number to be divisible by 3, the sum of it digits must be divisible by 3
/*
From the given set, various arrangements like 444 can be formed but since repetition isn’t allowed we won’t be considering them.
We are left with just 2 cases i.e. 2, 4, 6 and 4, 6, 8
The number of arrangements are 3! in each case
Hence the total number of permutations are: 3! + 3! = 12
*/
//C. Permutation without repetition:
//This is when we arrange just r objects out of n objects without repetition.
//Question: An ice-cream shop has 10 flavors of ice cream. Find the number of ways of preparing an ice cream cone with any 3 different flavors?
/*
Solution: Let us consider n = 10 (total number of flavors) and r = 3 (number of different flavors needed)
For first flavor we have 10 choices
For second flavor we have 10 - 1 choices
For third flavor we have 10 - 2 choices and this is same as (n - r + 1)
The numbers of arrangement would be: 10 × (10 - 1) × (10 - 3 + 1) = 720
From this we can generalize that, the number of ways of arranging r objects out of n different objects is:
n × (n - 1)  . . . (n - r + 1) = nPr
*/
//D. r- permutation with repetition:
//This can be thought of as the distribution of n objects into r boxes where the repetition of objects is allowed, and any box can hold any number of objects.
//Question: A police officer visits the crime scene 3 times a week for investigation. Find the number of ways to schedule his visit if there is no restriction on the number of visits per day?
/*
Solution: The number of ways to schedule first visit is 7 (any of the 7 days)
The number of ways to schedule second visit is 7 (any of the 7 days)
The number of ways to schedule third visit is 7 (any of the 7 days)
Hence, the number of ways to schedule first and second and third visit is 7 × 7 × 7 = 73 = 343
*/

// *** COMBINATIONS ***
//to see more information look this link (information is too long): https://www.geeksforgeeks.org/basics-of-combinatorics-for-competitive-programming/