# Write your MySQL query statement below
# source :https://leetcode.com/problems/products-worth-over-invoices/submissions/

SELECT p.name, COALESCE(SUM(i.rest), 0) as rest, COALESCE(SUM(i.paid), 0) as paid, COALESCE(SUM(i.canceled), 0) as canceled, COALESCE(SUM(i.refunded), 0)as refunded from
invoice i right join product p on i.product_id = p.product_id
GROUP BY p.name
order by p.name
