# Source  :https://leetcode.com/problems/duplicate-emails/submissions/821065805/
# Write your MySQL query statement below
SELECT email from person
GROUP BY EMAIL
HAVING
COUNT(email)>1
