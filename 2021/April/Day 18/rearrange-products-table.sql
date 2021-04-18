#Source :https://leetcode.com/problems/rearrange-products-table/submissions/
# Write your MySQL query statement below

SELECT * FROM


(SELECT product_id, "store1" as store,store1  as price FROM products
UNION
SELECT product_id,"store2" as store, store2 as price FROM products
UNION
SELECT product_id, "store3" as store,store3 as price FROM products) as a1

WHERE a1.price is not null
