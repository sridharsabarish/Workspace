#Source : https://leetcode.com/problems/product-sales-analysis-i/submissions/

# Write your MySQL query statement below
SELECT p.product_name, s.year,s.price from
Sales s
inner join product p
on s.product_id = p.product_id
