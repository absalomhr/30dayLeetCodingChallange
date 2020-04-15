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
### Day Seven: Counting Elements
Given an integer array arr, count element x such that x + 1 is also in arr. If there're duplicates in arr, count them seperately.
#### Example:
Input: [1,2,3]\
Output:2\
Explanation: 1 and 2 are counted cause 2 and 3 are in arr
### Day Eight: Middle Of A Linked List
Given a non-empty, singly linked list with head node head, return a middle node of linked list. If there are two middle nodes, return the second middle node.
#### Example:
Input: [1,2,3,4,5,6]\
Output: Node 4 from this list (Serialization: [4,5,6])\
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
### Day Nine: Backspace String Compare
Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character.
#### Example:
Input: S = "ab#c", T = "ad#c"\
Output: true\
Explanation: Both S and T become "ac".
#### Solution complexity:
Space: O(1)\
Time: O(N).
### Day Ten: Min Stack
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
#### Example:
MinStack minStack = new MinStack();\
minStack.push(-2);\
minStack.push(0);\
minStack.push(-3);\
minStack.getMin();   --> Returns -3.\
minStack.pop();\
minStack.top();      --> Returns 0.\
minStack.getMin();   --> Returns -2.
### Day Eleven: Diameter of binary tree
Given a binary tree, you need to compute the length of the diameter of the tree. The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root. 
### Day Twelve: Last Stone Weight
We have a collection of stones, each stone has a positive integer weight.\
Each turn, we choose the two heaviest stones and smash them together.  Suppose the stones have weights x and y with x <= y.  The result of this smash is:\
- if x == y, both stones are totally destroyed;
- if x != y, the stone of weight x is totally destroyed, and the stone of weight y has new weight y-x.\
At the end, there is at most 1 stone left.  Return the weight of this stone (or 0 if there are no stones left.)

#### Example:
Input: [2,7,4,1,8,1]\
Output: 1\
Explanation:\ 
We combine 7 and 8 to get 1 so the array converts to [2,4,1,1,1] then,\
we combine 2 and 4 to get 2 so the array converts to [2,1,1,1] then,\
we combine 2 and 1 to get 1 so the array converts to [1,1,1] then,\
we combine 1 and 1 to get 0 so the array converts to [1] then that's the value of last stone.
### Day Thirteen: Contiguous Array
Given a binary array, find the maximum length of a contiguous subarray with equal number of 0 and 1.
#### Example:
Input: [0,1]\
Output: 2\
Explanation: [0, 1] is the longest contiguous subarray with equal number of 0 and 1.
### Day Fourteen: Perform String Shifts
You are given a string s containing lowercase English letters, and a matrix shift, where shift[i] = [direction, amount]:
- direction can be 0 (for left shift) or 1 (for right shift). 
- amount is the amount by which string s is to be shifted.
- A left shift by 1 means remove the first character of s and append it to the end.
- Similarly, a right shift by 1 means remove the last character of s and add it to the beginning.
Return the final string after all operations.

#### Example:
Input: s = "abc", shift = [[0,1],[1,2]]\
Output: "cab"\
Explanation: \
[0,1] means shift to left by 1. "abc" -> "bca"\
[1,2] means shift to right by 2. "bca" -> "cab"