# Source : https://leetcode.com/problems/find-total-time-spent-by-each-employee/submissions/
# Write your MySQL query statement below

select event_day as day, emp_id,SUM(out_time-in_time) as total_time From EMployees
Group by emP_id,event_day