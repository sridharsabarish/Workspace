# Source : https://leetcode.com/problems/the-number-of-employees-which-report-to-each-employee/submissions/
 Write your MySQL query statement below

SELECT  e2.employee_id as employee_id, e2.name as name, count(e1.employee_id) as reports_count, round(avg(e1.age)) as average_age from Employees e1

inner join Employees e2
on e2.employee_id = e1.reports_to
GROUP BY e1.reports_to
order by e2.employee_id
