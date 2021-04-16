# Source:https://leetcode.com/problems/number-of-comments-per-post/


select
    distinct(s2.sub_id) as 'post_id',
    count(distinct(s1.sub_id)) as 'number_of_comments'
from
    submissions as s1 right join submissions as s2
on s1.parent_id = s2.sub_id
where s2.parent_id is Null
group by s2.sub_id
