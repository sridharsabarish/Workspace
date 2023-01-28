# Source : https://leetcode.com/problems/duplicate-emails/submissions/
SELECT a.email as email from

(SELECT count(email) as total, email from Person
GROUP BY email)as a

WHERE total>1;