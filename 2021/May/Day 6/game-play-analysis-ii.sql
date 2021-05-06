# Source : https://leetcode.com/problems/game-play-analysis-ii/submissions/
select player_id,device_id from (
select player_id,device_id,rank()over(partition by player_id order by event_date) rnk from activity
)a where rnk = 1
