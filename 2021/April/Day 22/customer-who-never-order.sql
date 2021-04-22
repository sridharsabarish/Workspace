#Source : https://leetcode.com/problems/customers-who-never-order/submissions/

# Write your MySQL query statement below

SELECT Name as Customers from Customers c Left join Orders o
on c.Id = o.CustomerId
WHERE o.Id is Null
