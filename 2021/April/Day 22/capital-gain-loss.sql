#source : https://leetcode.com/problems/capital-gainloss/submissions/
# Write your MySQL query statement below

SELECT stock_name, SUM(CASE WHEN operation='Buy'  THEN -price ELSE price END) as capital_gain_loss FROM Stocks GROUP BY Stock_name ORDER BY operation_day
