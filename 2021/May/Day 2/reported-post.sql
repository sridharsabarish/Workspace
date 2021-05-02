# Source : https://leetcode.com/problems/reported-posts/submissions/
# Write your MySQL query statement below
SELECT  extra as report_reason, count(DISTINCT post_id) as report_count
FROM Actions a
WHERE a.action_date="2019-07-04" and a.action='report'
GROUP BY extra
