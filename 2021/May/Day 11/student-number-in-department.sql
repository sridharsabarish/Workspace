# Source :https://leetcode.com/problems/count-student-number-in-departments/submissions/
SELECT a.dept_name, count(a.student_id) as student_number from
(SELECT d.dept_name as dept_name,s.student_id from department d left join student s on
d.dept_id = s.dept_id) a
GROUP by a.dept_name
order by student_number desc,a.dept_name
