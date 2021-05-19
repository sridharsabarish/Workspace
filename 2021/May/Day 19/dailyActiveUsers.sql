# Source :https://leetcode.com/problems/user-activity-for-the-past-30-days-i/submissions/

SELECT activity_date as day,count(DISTINCT user_id) as active_users FROM Activity

WHERE activity_date>'2019-06-27' and activity_date<='2019-07-27'
GROUP BY activity_date
