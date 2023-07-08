# Source: https://leetcode.com/problems/not-boring-movies/
SELECT * From cinema WHERE description!='boring' AND id%2=1
ORDER BY RATING DESC;