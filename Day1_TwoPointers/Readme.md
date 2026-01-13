# Day 1: Two Pointers Technique

## Problem Solved
**LeetCode 167 - Two Sum II - Input Array Is Sorted**

## Technique Used
Two Pointers - works efficiently on sorted arrays by using logical pointer movement based on sum comparison.

## Time Complexity
O(n) - Single pass through array

## Space Complexity  
O(1) - Only two pointer variables used

## Key Insight
On sorted data, we can make intelligent decisions about which pointer to move:
- If sum > target: move right pointer left (decrease sum)
- If sum < target: move left pointer right (increase sum)
- If sum == target: solution found, return immediately
