# Source : https://leetcode.com/problems/movie-rating/submissions/
# Write your MySQL query statement below

(SELECT u.name as 'Results' from Movie_rating m inner join users u on u.user_id = m.user_id
inner join movies mo on mo.movie_id=m.movie_id
group by u.name
order by count(m.movie_id) DESC,u.name asc
LIMIT 1)

union

(SELECT mo.title as 'Results' from Movie_rating m inner join users u on u.user_id = m.user_id
inner join movies mo on mo.movie_id=m.movie_id

 WHERE m.created_at>'2020-01-31' and m.created_at<'2020-03-01'
 group by mo.title
order by avg(m.rating) DESC,mo.title asc

LIMIT 1)
