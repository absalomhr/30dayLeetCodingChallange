## 30dayLeetCodingChallange

### Day One: Single Number
Given a non-empty array of integers, every element appears twice except for one. Find that single one.
#### Example:
Input: [4,1,2,1,2]\
Output: 4

### Day Two: Happy Number
A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.\
Return True if n is a happy number, and False if not.
#### Example:
Input: 19\
Output: true\
Explanation:\
1^2 + 9^2 = 82\
8^2 + 2^2 = 68\
6^2 + 8^2 = 100\
1^2 + 0^2 + 0^2 = 1

### Day Three: Maximum Subarray
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
#### Example:
Input: [-2,1,-3,4,-1,2,1,-5,4]\
Output: 6\
Explanation: [4,-1,2,1] has the largest sum = 6.

### Day Four: Move Zeroes
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.\
Note:
- You must do this in-place without making a copy of the array.

#### Example:
Input: [0,1,0,3,12]\
Output: [1,3,12,0,0]

### Day Five: Best Time to Buy and Sell Stock II
Say you have an array for which the ith element is the price of a given stock on day i.\
Design an algorithm to find the maximum profit. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).\
Note:
- You may not engage in multiple transactions at the same time (i.e., you must sell the stock before you buy again).

#### Example:
Input: [7,1,5,3,6,4]\
Output: 7\
Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.\
Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
### Day Six: Group Anagrams
Given an array of strings, group anagrams together.
#### Example:
Input: ["eat", "tea", "tan", "ate", "nat", "bat"]\
Output:[["ate","eat","tea"], ["nat","tan"], ["bat"]]
### Day Seven: Counting Numbers
Given an integer array arr, count element x such that x + 1 is also in arr. If there're duplicates in arr, count them seperately.
#### Example:
Input: [1,2,3]\
Output:2\
Explanation: 1 and 2 are counted cause 2 and 3 are in arr