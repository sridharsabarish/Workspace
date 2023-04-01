#Source : https://leetcode.com/problems/employee-bonus/submissions/
# Write your MySQL query statement below
SELECT Name,bonus from Employee e 
LEFT join Bonus b on e.empId=b.empId
WHERE b.bonus IS NULL or b.bonus<1000
