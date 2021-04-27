# Source : https://leetcode.com/problems/sellers-with-no-sales/submissions/
# Write your MySQL query statement below
SELECT seller_name from Seller
WHERE
seller_id not in
(


SELECT seller_id from Orders
WHERE sale_date>='2020-01-01')
order by seller_name
