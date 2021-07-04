# SOurce : https://leetcode.com/problems/delete-duplicate-emails/submissions/
DELETE FROM
Person
WHERE
ID NOT IN
  (

      select * from (
SELECT
MIN(Id)
FROM
Person
GROUP BY
Email) t
);  
