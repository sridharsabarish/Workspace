# Write your MySQL query statement below
# Source : https://leetcode.com/problems/ad-free-sessions/submissions/
SELECT p1.session_id from playback p1

where p1.session_id not in
(SELECT  distinct p.session_id FROM playback p, ads a
where a.customer_id = p.customer_id
and a.timestamp between p.start_time and p.end_time)
