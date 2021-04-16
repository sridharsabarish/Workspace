#Source : https://leetcode.com/problems/unique-orders-and-customers-per-month/submissions/

SELECT DATE_FORMAT(order_date,'%Y-%m') as month,count(DISTINCT order_id) as order_count,count(DISTINCT customer_id) as customer_count
FROM Orders o
where o.invoice>20
GROUP by month
