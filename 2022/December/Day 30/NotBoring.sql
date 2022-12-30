# Source : https://leetcode.com/problems/not-boring-movies/submissions/
SELECT * from Cinema  WHERE 
(MOD(ID, 2) <> 0 

AND

description NOT IN ("Boring")
)
order by rating desc;