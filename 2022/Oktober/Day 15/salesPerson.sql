# Source : https://leetcode.com/problems/sales-person/submissions/822757085/
SELECT name from SalesPerson s1 LEFT Join
(SELECT a.sp as k from
(SELECT s.name as sp ,c.name as cp From Orders o  Left join Company c on
o.com_id=c.com_id
LEFT Join SalesPerson s on
o.sales_id=s.sales_id
HAVING cp = "RED"
) as a
) as b
on s1.name=b.k
WHERE b.k IS NULL
