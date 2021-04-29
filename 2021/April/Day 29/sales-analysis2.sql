# source :https://leetcode.com/problems/sales-analysis-ii/submissions/
# Write your MySQL query statement below

SELECT  distinct s.buyer_id from Sales s
inner join Product p on s.product_id=p.product_id
WHERE product_name='S8'

and s.buyer_id not in

(SELECT s.buyer_id from Sales s
inner join Product p on s.product_id=p.product_id
WHERE product_name='iPhone')
