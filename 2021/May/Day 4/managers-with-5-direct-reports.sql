# Source :https://leetcode.com/problems/managers-with-at-least-5-direct-reports/submissions/

SELECT e2.Name From Employee e1 inner join Employee e2 on
e1.ManagerId = e2.Id
group by e2.Name
HAVING count(e2.name)>=5
