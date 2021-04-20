
# source : https://leetcode.com/problems/product-sales-analysis-ii/submissions/
# Write your MySQL query statement below

Select product_id,sum(quantity) as total_quantity From Sales
GROUP BY product_id
