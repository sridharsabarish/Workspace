# Source : https://leetcode.com/problems/group-sold-products-by-the-date/
# Learned about group concat
# Write your MySQL query statement below
SELECT sell_date,count(DISTINCT product) as num_sold,
GROUP_CONCAT( DISTINCT product order by product ASC separator ',' ) as products
from Activities
GRoup by sell_date