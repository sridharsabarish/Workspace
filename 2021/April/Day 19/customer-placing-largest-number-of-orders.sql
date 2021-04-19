#Source : https://leetcode.com/problems/customer-placing-the-largest-number-of-orders/
# Write your MySQL query statement below
SELECT a1.customer_number
from

(Select customer_number,count(order_number) as counts
FROM Orders
Group BY customer_number
ORDER BY counts desc) as a1
LIMIT 1
