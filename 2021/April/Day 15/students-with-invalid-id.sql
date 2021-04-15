# Write your MySQL query statement below

SELECT s1.id as id, s1.name as name from Students s1 where

s1.name not in

(SELECT s.id from Students s inner join departments d on
s.department_id=d.id)

and

s1.id not in

(SELECT s.id from Students s inner join departments d on
s.department_id=d.id)
