# Write your MySQL query statement below
# Source : https://leetcode.com/problems/consecutive-available-seats/submissions/

select distinct t1.seat_id from cinema t1, cinema t2
where
(t1.seat_id = t2.seat_id - 1 and (t1.free=1 and t2.free=1))

union

select distinct t1.seat_id from cinema t1, cinema t2
where
(t1.seat_id = t2.seat_id + 1 and (t1.free=1 and t2.free=1))

ORDER BY seat_id
