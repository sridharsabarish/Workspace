# Write your MySQL query statement below
# Sourcre : https://leetcode.com/problems/project-employees-ii/submissions/

SELECT a2.p as project_id from

(SELECT p2.project_id as p, count(p2.employee_id) as tot from project p2
GROUP BY p2.project_id
HAVING tot in


(SELECT max(a1.total) as maxx from
(SELECT count(employee_id) as total from Project
group by project_id) a1)
)a2
