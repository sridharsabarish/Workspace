// Source : https://leetcode.com/problems/employees-earning-more-than-their-managers/submissions/817652971/
# Write your MySQL query statement below


SELECT e1.name as Employee From Employee e1 inner join Employee e2 on e1.managerId = e2.id
WHERE e1.salary>e2.salary
