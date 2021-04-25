#Source : https://leetcode.com/problems/primary-department-for-each-employee/submissions/

# Write your MySQL query statement below

 SELECT e.employee_id,e.department_id from Employee e where primary_flag = 'Y'

 UNION

SELECT d2.employee_id,d2.department_id from

(SELECT count(employee_id) as num,employee_id,department_id from Employee e
group by employee_id
Having num =1) as d2
