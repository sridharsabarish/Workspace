# Source : https://leetcode.com/problems/big-countries/submissions/820349874/?envType=study-plan&id=sql-i
# Write your MySQL query statement below
SELECT name,population,area From World WHERE
AREA>=3000000 OR population >=25000000;
