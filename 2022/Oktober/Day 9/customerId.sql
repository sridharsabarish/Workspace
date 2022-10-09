# source :https://leetcode.com/problems/customers-who-never-order/submissions/818406629/
# Write your MySQL query statement below
SELECT name as Customers from customers  c

LEFT JOIN orders o
on o.customerid=c.id

WHERE o.customerId IS NULL;
