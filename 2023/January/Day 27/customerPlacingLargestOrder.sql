# Source : https://leetcode.com/problems/customer-placing-the-largest-number-of-orders/submissions/
# Write your MySQL query statement below
Select a.customer_number as customer_number from
(SELECT customer_number,COUNT(*) as total FROM ORDERS GROUP BY customer_number
ORDER BY total desc
LIMIT 1) as a;