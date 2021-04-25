#Source : https://leetcode.com/problems/find-customer-referee/submissions/
# Write your MySQL query statement below

SELECT  name from customer WHERE referee_id is NULL or referee_id!=2
