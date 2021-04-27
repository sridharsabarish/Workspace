#SOURCE : https://leetcode.com/problems/actors-and-directors-who-cooperated-at-least-three-times/submissions/
# Write your MySQL query statement below

select a1.actor_id, a1.director_id from
(SELECT count(1) as total, actor_id,director_id from ActorDirector
group by actor_id,director_id
HAVING total>=3) as a1
