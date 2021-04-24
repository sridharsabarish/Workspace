#source : https://leetcode.com/problems/fix-product-name-format
# Write your MySQL query statement below
SELECT trim(lower(product_name)) as product_name,date_format(sale_date, "%Y-%m") as sale_date,count(sale_id)  as total
FROM Sales
group by 1,2
order by 1,2
