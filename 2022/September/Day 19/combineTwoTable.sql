# Source : https://leetcode.com/problems/combine-two-tables/submissions/
# Write your MySQL query statement below
SELECT firstName,lastName,city, state from person p left join Address A on p.personId=A.personId;
