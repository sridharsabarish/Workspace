# Source : https://leetcode.com/problems/invalid-tweets/submissions/
# Write your MySQL query statement below
SELECT tweet_id from Tweets 
WHERE LENGTH(content) > 15;