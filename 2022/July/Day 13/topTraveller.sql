# https://leetcode.com/problems/top-travellers/submissions/

SELECT a.name,a.travelled_distance from

(SELECT name, SUM(CASE WHEN distance  is NOT NULL  THEN distance ELSE 0 END)  as travelled_distance from Users u  left join Rides r on
u.id=r.user_id
GROUP BY r.user_id) as a
order by a.travelled_distance desc, a.name
