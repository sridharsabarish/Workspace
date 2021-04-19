# Source : https://leetcode.com/problems/count-apples-and-oranges/submissions/
# Write your MySQL query statement below

 SELECT sum(a.total_apple_count) as apple_count,sum(a.total_orange_count) as orange_count
 from
 (

    Select COALESCE(b.apple_count,0)+COALESCE(c.apple_count,0) as total_apple_count,COALESCE(b.orange_count,0)+COALESCE(c.orange_count,0) as total_orange_count from boxes b left join chests c
on
b.chest_id = c.chest_id
 ) as a
