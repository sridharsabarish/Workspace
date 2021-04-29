# Source : https://leetcode.com/problems/biggest-single-number/submissions/
select ifnull(
    (select num
from my_numbers
group by num
having count(num) = 1
order by num desc
limit 1),null) as num
