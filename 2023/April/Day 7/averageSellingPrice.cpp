# Write your MySQL query statement below




SELECT p.product_id,ROUND(SUM(u.units*p.price)/SUM(units),2) as average_price From unitsSold u left join prices p on
p.product_id=u.product_id
WHERE u.purchase_date>=p.start_date AND u.purchase_date<=p.end_date GROUP BY p.product_id;
