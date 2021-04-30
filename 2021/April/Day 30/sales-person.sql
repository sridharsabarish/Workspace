# Source : https://leetcode.com/problems/sales-person/submissions/
# Write your MySQL query statement below
SELECT s.name from salesperson s where

s.sales_id NOT IN
(SELECT o.sales_id from Orders o
inner join company c on o.com_id=c.com_id
and
c.name = 'RED')
