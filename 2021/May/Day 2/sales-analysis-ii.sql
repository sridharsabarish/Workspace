# Source : https://leetcode.com/problems/sales-analysis-iii/submissions/
# Write your MySQL query statement below

SELECT DISTINCT s.product_id, p.product_name from sales s inner join product p on s.product_id = p.product_id

WHERE s.product_id  not in
(SELECT  DISTINCT product_id from Sales
WHERE sale_date < '2019-01-01' or sale_date >'2019-03-31')
order by s.product_id
