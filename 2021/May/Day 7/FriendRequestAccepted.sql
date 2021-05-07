
# Source : https://leetcode.com/problems/friend-requests-i-overall-acceptance-rate/submissions/
 SELECT ifnull (ROUND(COUNT(DISTINCT requester_id,accepter_id)/
        (SELECT COUNT(DISTINCT sender_id,send_to_id)
            FROM FriendRequest),2),0) AS accept_rate
    FROM RequestAccepted
