# Source : https://leetcode.com/problems/the-latest-login-in-2020/submissions/

 SELECT user_id, max(time_stamp) as last_stamp from Logins l
WHERE (l.time_stamp>='2020-01-01 00:00:00') and (l.time_stamp<='2020-12-31 23:59:59')
group by user_id
