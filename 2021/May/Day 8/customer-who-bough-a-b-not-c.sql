# Source : https://leetcode.com/problems/customers-who-bought-products-a-and-b-but-not-c/submissions/

SELECT DISTINCT o4.customer_id,c.customer_name from Orders o4 inner join customers c on o4.customer_id=c.customer_id
WHERE o4.customer_id in
(SELECT distinct o.customer_id from Orders o where o.product_name='A')
and o4.customer_id in
(SELECT distinct o2.customer_id from orders o2 where o2.product_name='B')

and o4.customer_id not in
(SELECT distinct o3.customer_id from orders o3 where o3.product_name='C')
