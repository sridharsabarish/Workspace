#Source :https://leetcode.com/problems/shortest-distance-in-a-line/submissions/
# Write your MySQL query statement below

select min(abs(a1.p1-a1.p2)) as shortest from

(Select p1.x as p1,p2.x as p2 from point p1
cross join point p2 on p1.x!=p2.x) as a1
