#Source : https://leetcode.com/problems/average-selling-price/submissions/
# Write your MySQL query statement below

Select a1.product_id as product_id, ROUND(SUM(a1.total)/(SUM(a1.units)),2) as average_price
FROM


(Select p.product_id,price,units,price*units as total From Prices p
inner join unitssold u
on p.product_id = u.product_id
where purchase_date>=start_date and purchase_date<=end_date) as a1

GROUP By a1.product_id
