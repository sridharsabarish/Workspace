# Source : https://leetcode.com/problems/queries-quality-and-percentage/submissions/
SELECT a1.query_name, round(avg(a1.temp),2) as quality, round(100*(sum(a1.q)/count(a1.q)),2) as poor_query_percentage from
(SELECT query_name, rating/position as temp, case WHEN rating<3 then 1 else 0 end as q from Queries) a1
group by a1.query_name
