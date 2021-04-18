# Source : https://leetcode.com/problems/game-play-analysis-i/submissions/
# Write your MySQL query statement below
Select player_id, MIN(event_date) as first_login from activity
group by player_id
