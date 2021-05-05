# Source : https://leetcode.com/problems/percentage-of-users-attended-a-contest/submissions/
SELECT A1.contest_id,Round((A1.u/A2.u2)*100,2) as percentage from
(SELECT r.contest_id,count(r.user_id) as u from Register r
group by r.contest_id)A1,
(Select count(u.user_id) as u2 from Users u)A2
order by percentage desc,A1.contest_id asc
