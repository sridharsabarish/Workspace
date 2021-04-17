#Source : https://leetcode.com/problems/group-sold-products-by-the-date/


select
sell_date,
count(distinct(product)) as num_sold,
string_agg(product, ',') as products
from (select distinct * from Activities) T
group by sell_date
