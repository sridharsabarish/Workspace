// Source : https://leetcode.com/problems/number-of-unique-subjects-taught-by-each-teacher/submissions/
SELECT teacher_id,COUNT(DISTINCT subject_id) as cnt FROM Teacher group by teacher_id