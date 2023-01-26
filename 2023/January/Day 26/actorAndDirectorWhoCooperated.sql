# Source : https://leetcode.com/problems/actors-and-directors-who-cooperated-at-least-three-times/submissions/

SELECT t1.actor_id as actor_id,t1.director_id as director_id FROM
(SELECT actor_id, director_id, COUNT(actor_id) as times FROM ActorDirector GROUP BY actor_id,director_id)as t1
WHERE t1.times>2;