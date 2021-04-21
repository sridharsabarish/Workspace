# Source : https://leetcode.com/problems/rank-scores/submissions/
# Write your MySQL query statement below
select Score, Dense_Rank()over(order by Score DESC) AS "Rank" from Scores
