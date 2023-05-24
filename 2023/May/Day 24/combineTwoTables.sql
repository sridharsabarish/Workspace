# Source : https://leetcode.com/problems/combine-two-tables/submissions/
SELECT firstName,lastName,a.city,a.state from Person Left join Address a on
Person.personid=a.personId