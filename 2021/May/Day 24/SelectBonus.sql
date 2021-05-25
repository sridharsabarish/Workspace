# Source : https://leetcode.com/problems/calculate-special-bonus/submissions/
SELECT employee_id, case when (employee_id %2=1 and name not like('M%')) then salary else 0 END as bonus from Employees
