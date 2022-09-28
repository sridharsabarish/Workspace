# Source : https://leetcode.com/problems/employees-with-missing-information/submissions/
# Quality : Acceptable. Can be improved with runtime performance.
SElect employee_id from EMployees

WHERE
employee_id NOT IN(

Select employee_id from salaries)

UNION

SElect employee_id from salaries

WHERE
employee_id NOT IN(

Select employee_id from employees)
ORDER BY employee_id
