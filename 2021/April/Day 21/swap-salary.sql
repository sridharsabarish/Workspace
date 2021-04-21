#Source : https://leetcode.com/problems/swap-salary/submissions/
# Write your MySQL query statement below
UPDATE Salary
SET
    sex = CASE WHEN sex = 'm' THEN 'f' ELSE 'm' END
