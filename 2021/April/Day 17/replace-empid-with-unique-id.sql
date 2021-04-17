# Source:https://leetcode.com/problems/replace-employee-id-with-the-unique-identifier/submissions/

SELECT e1.unique_id,e.name from employees e
left join employeeUNI e1
on
e.id=e1.id
