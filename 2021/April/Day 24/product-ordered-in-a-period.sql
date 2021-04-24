# source : https://leetcode.com/problems/list-the-products-ordered-in-a-period/submissions/
# Write your MySQL query statement below

SELECT product_name, sum(unit) as unit from

(SELECT  order_date,unit,product_name from orders o
inner join products p on o.product_id = p.product_id
where o.order_date>'2020-01-31' and o.order_date<'2020-03-01'
 )as a1

group by product_name
HAVING unit>=100
