
/* W/ Source :https://leetcode.com/problems/fix-names-in-a-table/submissions/*/

SELECT user_id, INITCAP(name) as name from USERS
order by user_id
