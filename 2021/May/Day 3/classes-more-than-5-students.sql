# Source : https://leetcode.com/problems/classes-more-than-5-students/submissions/
SELECT class
FROM Courses
GROUP BY CLASS
HAVING
count(distinct student) >=5
