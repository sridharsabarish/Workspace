# Source : https://leetcode.com/problems/weather-type-in-each-country/submissions/

# Write your MySQL query statement below

select a.country_name, case when a.temp<=15 THEN 'Cold'
                             when a.temp<25 then 'Warm'
                             else 'Hot' end as weather_type from
(SELECT w.country_id, avg(w.weather_state) as temp, c.country_name
from weather w
inner join Countries c on c.country_id=w.country_id

WHERE w.day>='2019-11-01' and w.day<'2019-12-01'
 group by country_id
) as a
