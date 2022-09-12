# Source : https://leetcode.com/problems/find-total-time-spent-by-each-employee/submissions/
# Write your MySQL query statement below
SELECT event_day as day,emp_id, abs(SUM(IN_TIME)-SUM(OUT_TIME)) as total_time from Employees group by event_day,emp_id
ORDER BY day;
